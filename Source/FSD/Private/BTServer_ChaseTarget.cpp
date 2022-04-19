#include "BTServer_ChaseTarget.h"

UBTServer_ChaseTarget::UBTServer_ChaseTarget() {
    this->MustBeAlive = false;
    this->MustBeUnparalyzed = false;
    this->PreferNewTarget = false;
    this->IsFlying = false;
    this->CanShoot = false;
    this->TargetingRange = 3500.00f;
    this->SwitchTargetTime = 0.00f;
    this->SwitchTargetDeviation = 0.00f;
}

