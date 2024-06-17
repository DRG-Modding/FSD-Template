#include "StreamlineOverrideSettings.h"

UStreamlineOverrideSettings::UStreamlineOverrideSettings() {
    this->EnableDLSSFGInPlayInEditorViewportsOverride = EStreamlineSettingOverride::UseProjectSettings;
    this->LoadDebugOverlayOverride = EStreamlineSettingOverride::UseProjectSettings;
}


