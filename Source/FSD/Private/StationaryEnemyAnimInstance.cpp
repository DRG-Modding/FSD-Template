#include "StationaryEnemyAnimInstance.h"

UStationaryEnemyAnimInstance::UStationaryEnemyAnimInstance() {
    this->Target = NULL;
    this->Yaw = 0.00f;
    this->MappedYaw = 0.00f;
    this->Pitch = 0.00f;
    this->YawSpeed = 1.00f;
    this->PitchSpeed = 1.00f;
    this->LookingLeft = false;
    this->LookingRight = false;
    this->IsVisible = false;
    this->InvertPitch = false;
}

void UStationaryEnemyAnimInstance::SetIsVisible(bool InIsVisible) {
}


