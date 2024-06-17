#include "RockCrackedAnimInstance.h"

URockCrackedAnimInstance::URockCrackedAnimInstance() {
    this->pod = NULL;
    this->PodState = ERockCrackerstate::Init;
    this->IsActive = false;
    this->IsBroken = false;
}


