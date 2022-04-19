#include "WidgetAnimationSettings.h"

FWidgetAnimationSettings::FWidgetAnimationSettings() {
    this->PlaybackSpeed = 0.00f;
    this->PlayMode = EUMGSequencePlayMode::Forward;
    this->bRestoreState = false;
}

