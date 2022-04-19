#include "BTService_FindPlayer.h"

UBTService_FindPlayer::UBTService_FindPlayer() {
    this->MustBeAlive = false;
    this->SwithToBetterTargets = true;
    this->RegisterForPositioning = true;
    this->IsFlying = false;
    this->CanShoot = false;
    this->OwnerIsMultiTargeter = false;
    this->TargetingRange = 3500.00f;
}

