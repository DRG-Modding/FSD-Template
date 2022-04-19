#include "BoscoAnimInstance.h"

UBoscoAnimInstance::UBoscoAnimInstance() {
    this->DigAnimPlayRate = 0.00f;
    this->CurrentState = EDroneAIState::Follow;
    this->IsReadyToMine = false;
    this->IsMining = false;
    this->IsFiring = false;
    this->IsReviving = false;
    this->IsCarryingGem = false;
}

