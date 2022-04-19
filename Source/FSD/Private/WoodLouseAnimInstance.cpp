#include "WoodLouseAnimInstance.h"

UWoodLouseAnimInstance::UWoodLouseAnimInstance() {
    this->InterpSpeed = 3.00f;
    this->BreakRollingWhenTimeLeft = 0.97f;
    this->RollerState = EWoodLouseState::Unfolded;
    this->IsWalking = false;
    this->IsUpRight = false;
    this->IsDoingSpecialAttack = false;
    this->IsUnFolded = false;
    this->IsGroundValid = false;
    this->IsInRollState = false;
    this->IdleToDownTurnLeftLock = false;
    this->DownTurnLeftToIdleLock = false;
    this->DownWalkToDownTurnLeftLock = false;
    this->WoodlouseWalk = false;
    this->IdleToDownWalkLock = false;
    this->DownWalkToDownTurnRightLock = false;
    this->IdleToDownTurnRightLock = false;
}

