#include "JettyBootSettings.h"

FJettyBootSetting UJettyBootSettings::GetLevelSetting(int32 InLevel) const {
    return FJettyBootSetting{};
}

UJettyBootSettings::UJettyBootSettings() {
    this->LevelSettings.AddDefaulted(1);
}

