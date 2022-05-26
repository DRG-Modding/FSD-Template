#include "ControllerSettings.h"

FControllerSettings::FControllerSettings() {
    this->AimInnerDeadZone = 0.00f;
    this->AimSensitivity = 0.00f;
    this->AimOuterAcceleration = 0.00f;
    this->Turn180Mode = ETurn180Mode::PressRun;
    this->bPreviousItemEnabled = false;
    this->bChatEnabled = false;
}

