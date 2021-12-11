#include "FlyingLifterAnimInstance.h"

UFlyingLifterAnimInstance::UFlyingLifterAnimInstance() {
    this->HasGrabbedPlayer = false;
    this->ToChaseLock = false;
    this->ChaseToWanderLock = false;
    this->ToCarryLock = false;
    this->GrabberState = EGrabberState::StandBy;
}

