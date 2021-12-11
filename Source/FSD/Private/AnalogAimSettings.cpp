#include "AnalogAimSettings.h"

FAnalogAimSettings::FAnalogAimSettings() {
    this->ShowDebugOutput = false;
    this->SensitivityCurve = NULL;
    this->LookAtStickyness = 0.00f;
    this->StickynessRecoverySpeed = 0.00f;
    this->StickynessMaxSensitivity = 0.00f;
}

