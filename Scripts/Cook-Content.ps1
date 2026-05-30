param(
    # UE 项目文件路径；默认指向当前 RogueCore 项目。
    [string]$ProjectPath = "D:\UnrealProjects\RogueCore-Template\RogueCore.uproject",
    # 要 Cook 的内容目录；这里默认只限定项目 Content 目录，不重新打包整个项目。
    [string]$CookDir = "D:\UnrealProjects\RogueCore-Template\Content",
    # UE 安装目录；留空时会根据 .uproject 的 EngineAssociation 自动查找。
    [string]$EngineDir = "",
    # Cook 目标平台。Windows 对应 WindowsNoEditor 的常规 Windows Cook。
    [string]$TargetPlatform = "Windows",
    # 指定后会先删除 Saved\Cooked 下对应平台和项目的旧 Cook 输出。
    [switch]$CleanCooked,
    # 指定后启用 UE 的 -cookincludeassetclass 过滤，只 Cook 指定资产类及其派生类。
    [switch]$UseCookIncludeAssetClass,
    # cookincludeassetclass 的类路径；可传入多个资产类。
    [string[]]$CookIncludeAssetClass = @(),
    # 额外传给 UnrealEditor-Cmd 的 Cook 参数，例如：-VerboseCookerWarnings。
    [string[]]$ExtraCookArgs = @()
)

$ErrorActionPreference = "Stop"

function Get-UnrealEngineDir {
    param([string]$Version)

    # 优先读取 Epic Launcher 的安装清单，避免硬编码引擎安装盘符。
    $launcherInstalled = "C:\ProgramData\Epic\UnrealEngineLauncher\LauncherInstalled.dat"
    if (Test-Path $launcherInstalled) {
        $installed = Get-Content $launcherInstalled -Raw | ConvertFrom-Json
        $match = $installed.InstallationList |
            Where-Object { $_.AppName -eq "UE_$Version" -or $_.ArtifactId -eq "UE_$Version" } |
            Select-Object -First 1

        if ($match -and (Test-Path $match.InstallLocation)) {
            return $match.InstallLocation
        }
    }

    # 找不到安装清单时，退回本机常用的 UE 安装路径。
    $fallback = "D:\Epic Games\UE_$Version"
    if (Test-Path $fallback) {
        return $fallback
    }

    throw "Unable to find Unreal Engine $Version. Pass -EngineDir explicitly."
}

if (-not (Test-Path $ProjectPath)) {
    throw "Project file not found: $ProjectPath"
}

if (-not (Test-Path $CookDir)) {
    throw "Cook directory not found: $CookDir"
}

$projectJson = Get-Content $ProjectPath -Raw | ConvertFrom-Json
if ([string]::IsNullOrWhiteSpace($EngineDir)) {
    $EngineDir = Get-UnrealEngineDir -Version $projectJson.EngineAssociation
}

$editorCmd = Join-Path $EngineDir "Engine\Binaries\Win64\UnrealEditor-Cmd.exe"
if (-not (Test-Path $editorCmd)) {
    throw "UnrealEditor-Cmd.exe not found: $editorCmd"
}

if ($CleanCooked) {
    $projectRoot = Split-Path $ProjectPath -Parent
    $projectName = [IO.Path]::GetFileNameWithoutExtension($ProjectPath)
    $cookedDir = Join-Path $projectRoot "Saved\Cooked\$TargetPlatform\$projectName"
    if (Test-Path $cookedDir) {
        # 只清理 Cook 输出目录，不删除 Content 源资产。
        Remove-Item $cookedDir -Recurse -Force
        Write-Host "Removed cooked output: $cookedDir"
    }
}

# 这里只执行 Cook，不做 Stage、Pak、Archive，也不会重新打包目录。
$arguments = @(
    $ProjectPath,
    "-run=Cook",
    "-TargetPlatform=$TargetPlatform",
    "-CookDir=$CookDir",
    "-Iterate",
    "-SkipCookingEditorContent",
    "-Unattended",
    "-NoLogTimes",
    "-stdout",
    "-FullStdOutLogOutput"
)

if ($UseCookIncludeAssetClass) {
    if ($CookIncludeAssetClass.Count -eq 0) {
        throw "-UseCookIncludeAssetClass requires at least one -CookIncludeAssetClass value."
    }

    # 仅在显式开启时限制资产类；默认 Cook 目录下所有可 Cook 资产。
    $cookIncludeAssetClassValue = $CookIncludeAssetClass -join ";"
    $arguments += "-cookincludeassetclass=$cookIncludeAssetClassValue"
}

$arguments += $ExtraCookArgs

Write-Host "Cooking assets under: $CookDir"
Write-Host "Engine: $EngineDir"
Write-Host "Platform: $TargetPlatform"
if ($UseCookIncludeAssetClass) {
    Write-Host "Asset class filter: $cookIncludeAssetClassValue"
}

& $editorCmd @arguments
exit $LASTEXITCODE
