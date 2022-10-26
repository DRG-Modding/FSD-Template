#include "RockCrackedAnimInstance.h"

URockCrackedAnimInstance::URockCrackedAnimInstance() {
    this->Pod = NULL;
    this->PodState = ERockCrackerstate::Init;
    this->IsActive = false;
    this->IsBroken = false;
}

