#include "CameraSpringSettings.h"

FCameraSpringSettings::FCameraSpringSettings() {
    this->SpringEnabled = false;
    this->StepThreshold = 0.00f;
    this->RetractStrength = 0.00f;
    this->RetractDownReduction = 0.00f;
    this->ShowDebug = false;
    this->LastSpeedZ = 0.00f;
    this->bSpringInitialized = false;
}

