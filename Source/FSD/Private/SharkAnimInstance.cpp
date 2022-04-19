#include "SharkAnimInstance.h"

USharkAnimInstance::USharkAnimInstance() {
    this->SharkState = ESharkEnemyState::Idle;
    this->IsCloseToGround = false;
    this->AttackConnected = false;
    this->BendValue = 0.00f;
}

