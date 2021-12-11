using UnrealBuildTool;

public class FSDGameTarget : TargetRules {
	public FSDGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"FSD",
			"FSDEngine",
		});
	}
}
