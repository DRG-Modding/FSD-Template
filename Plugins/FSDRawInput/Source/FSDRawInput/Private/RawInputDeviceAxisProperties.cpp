#include "RawInputDeviceAxisProperties.h"

FRawInputDeviceAxisProperties::FRawInputDeviceAxisProperties() {
    this->bEnabled = false;
    this->bMapToButton = false;
    this->bInverted = false;
    this->bGamepadStick = false;
    this->Offset = 0.00f;
}

