#include "ProjectileState.h"

FProjectileState::FProjectileState() {
    this->HomingTargetComponent = NULL;
    this->IsSimulating = false;
    this->IsBouncy = false;
    this->IsHoming = false;
    this->IsPenetrating = false;
}

