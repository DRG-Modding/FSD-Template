#include "CaveLeechAnimInstance.h"

UCaveLeechAnimInstance::UCaveLeechAnimInstance() {
    this->HeadOffset = 0.00f;
    this->CaveLeech = NULL;
    this->CaveLeechHead = NULL;
    this->bIdle = false;
    this->bTracking = false;
    this->bPulling = false;
    this->bRetracting = false;
    this->bDying = false;
    this->bDead = false;
    this->bFrozen = false;
    this->bBiting = false;
}

