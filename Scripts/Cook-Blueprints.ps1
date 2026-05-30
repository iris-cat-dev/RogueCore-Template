# 从当前脚本所在目录调用通用 Cook 脚本，避免从项目根目录执行时找不到相对路径。
$scriptPath = $PSCommandPath
if ([string]::IsNullOrWhiteSpace($scriptPath)) {
    $scriptPath = $MyInvocation.PSCommandPath
}
if ([string]::IsNullOrWhiteSpace($scriptPath)) {
    $scriptPath = $MyInvocation.MyCommand.Path
}

if ([string]::IsNullOrWhiteSpace($scriptPath)) {
    throw "Unable to resolve current script path."
}

$scriptDir = Split-Path -Parent $scriptPath

$cookContentScript = Join-Path $scriptDir "Cook-Content.ps1"
$cookIncludeAssetClasses = @(
    "/Script/Engine.Blueprint",
    "/Script/Engine.DataAsset",
    "/Script/CoreUObject.UserDefinedStruct",
    "/Script/Engine.UserDefinedEnum",
    "/Script/Engine.SoundCue"
)

if (-not (Test-Path $cookContentScript)) {
    throw "Cook script not found: $cookContentScript"
}

$cookArgs = @{
    UseCookIncludeAssetClass = $true
    CookIncludeAssetClass = $cookIncludeAssetClasses
}

& $cookContentScript @cookArgs @args
exit $LASTEXITCODE