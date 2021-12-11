#include "GamepadCursorSettings.h"

UGamepadCursorSettings::UGamepadCursorSettings() {
    this->MaxSpeed = 2200.00f;
    this->Acceleration = 20.00f;
    this->StickySlowDown = 0.50f;
    this->DeadZone = 0.30f;
}

