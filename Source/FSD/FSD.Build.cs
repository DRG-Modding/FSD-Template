using UnrealBuildTool;

public class FSD : ModuleRules {
    public FSD(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "AnimationSharing",
			"AudioMixer",
            "Core",
            "CoreUObject",
            "DLSSBlueprint",
            "DSTelemetry",
            "DeveloperSettings",
            "Engine",
            "FSDEngine",
			"GameplayTasks",
            "GameplayTags",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
			"OnlineSubsystem",
            "Niagara",
            "OnlineSubsystemUtils",
            "PhysicsCore",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
