#include "ControllerIconSettings.h"

bool UControllerIconSettings::FindMouseKeyboardKeyIcon(FKey Key, FActionIconMapping& KeyIcon) {
    return false;
}

bool UControllerIconSettings::FindKeyIcon(FKey Key, FActionIconMapping& KeyIcon) {
    return false;
}

bool UControllerIconSettings::FindControllerKeyIcon(FKey Key, FActionIconMapping& KeyIcon) {
    return false;
}

UControllerIconSettings::UControllerIconSettings() {
    this->Xbox_KeyIcons.AddDefaulted(20);
    this->Playstation_KeyIcons.AddDefaulted(20);
    this->Playstation5_KeyIcons.AddDefaulted(20);
    this->MouseKeyboard_KeyIcons.AddDefaulted(58);
}

