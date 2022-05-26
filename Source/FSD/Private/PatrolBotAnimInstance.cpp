#include "PatrolBotAnimInstance.h"

UPatrolBotAnimInstance::UPatrolBotAnimInstance() {
    this->Tilt = 0.00f;
    this->Rolling = false;
    this->NotRolling = false;
    this->Disabled = false;
    this->FlyingDisable = false;
    this->CurrentTilt = 0.00f;
    this->TiltSpeed = 350.00f;
    this->WheelSpeedModifier = 1.00f;
}

