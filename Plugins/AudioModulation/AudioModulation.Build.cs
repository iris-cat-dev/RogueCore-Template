using UnrealBuildTool;

public class AudioModulation : ModuleRules {
    public AudioModulation(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioExtensions",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
        });
    }
}
