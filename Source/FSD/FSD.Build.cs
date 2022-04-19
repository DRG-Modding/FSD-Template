using UnrealBuildTool;

public class FSD : ModuleRules {
    public FSD(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "AnimationCore",
            "AnimationSharing",
            "AudioMixer",
            "Chaos",
            "Core",
            "CoreUObject",
            "DLSSBlueprint",
            "DeveloperSettings",
            "Engine",
            "FSDEngine",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "PhysicsCore",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
