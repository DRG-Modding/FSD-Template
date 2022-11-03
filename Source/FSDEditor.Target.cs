using UnrealBuildTool;

public class FSDEditorTarget : TargetRules {
	public FSDEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"FSD",
			"FSDEngine",
		});
	}
}
