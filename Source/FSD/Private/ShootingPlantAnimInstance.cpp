#include "ShootingPlantAnimInstance.h"

UShootingPlantAnimInstance::UShootingPlantAnimInstance() {
    this->Target = NULL;
    this->Yaw = 0.00f;
    this->Pitch = 0.00f;
    this->YawSpeed = 1.00f;
    this->PitchSpeed = 1.00f;
    this->IsVisible = false;
}

