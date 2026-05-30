using UnrealBuildTool;

public class RogueCoreUtils : ModuleRules {
    
    public RogueCoreUtils(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            [
                "Core"
            ]
        );

        PrivateDependencyModuleNames.AddRange(
            [
                "CoreUObject",
                "Engine",
                "GameplayTags",
            ]
        );
    } 
}
