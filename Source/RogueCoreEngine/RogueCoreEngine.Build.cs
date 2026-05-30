using UnrealBuildTool;

public class RogueCoreEngine : ModuleRules {
    public RogueCoreEngine(ReadOnlyTargetRules Target) : base(Target) {
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
                "PhysicsCore",
            ]
        );
    }
}
