using UnrealBuildTool;

public class RogueCoreOnlineServices : ModuleRules {
    public RogueCoreOnlineServices(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            [
                "Core"
            ]
        );

        PrivateDependencyModuleNames.AddRange(
            [
                "CoreUObject",
                "DeveloperSettings",
                "Engine",
                "GameplayTags",
                "MediaAssets",
                "RogueCoreUtils",
            ]
        );
    }
}
