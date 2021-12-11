#include "ConvertedRobotAnimInstance.h"

UConvertedRobotAnimInstance::UConvertedRobotAnimInstance() {
    this->HasIntroduced = false;
    this->IsWalking = false;
    this->IsIntroducing = false;
    this->ShouldSit = false;
    this->StopSit = false;
    this->ShouldCollapse = false;
    this->IsPoweredDown = false;
    this->WalkingRate = 1.00f;
    this->NormalWalkSpeed = 200.00f;
}

