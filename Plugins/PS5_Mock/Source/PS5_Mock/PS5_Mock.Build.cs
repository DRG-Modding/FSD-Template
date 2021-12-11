using UnrealBuildTool;

public class PS5_Mock : ModuleRules {
    public PS5_Mock(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioExtensions",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
