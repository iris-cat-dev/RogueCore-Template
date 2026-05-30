using UnrealBuildTool;

public class RogueCore : ModuleRules {
    public RogueCore(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "AnimationSharing",
            "AudioModulation",
            "BinkMediaPlayer",
            "Core",
            "CoreUObject",
            "DLSSBlueprint",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MetasoundEngine",
            "MovieScene",
            "NetCore",
            "Niagara",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "PhysicsCore",
            "RogueCoreEngine",
            "RogueCoreOnlineServices",
            "RogueCoreUtils",
            "Slate",
            "SlateCore",
            "TemplateSequence",
            "UMG",
        });
    }
}
