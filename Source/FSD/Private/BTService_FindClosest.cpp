#include "BTService_FindClosest.h"

UBTService_FindClosest::UBTService_FindClosest() {
    this->TargetValidator = NULL;
    this->MustBeAlive = false;
    this->OwnerIsMultiTargeter = false;
    this->ClearTargetIfNotValid = false;
    this->TargetingRange = 3500.00f;
}

