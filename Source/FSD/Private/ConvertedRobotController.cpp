#include "ConvertedRobotController.h"

void AConvertedRobotController::ResetCloseTimer() {
}

AConvertedRobotController::AConvertedRobotController() {
    this->CheckRangeInterval = 0.50f;
    this->MaxTimeInRange = 5.00f;
    this->PersonalSpaceRange = 5.00f;
    this->SpecialAttackRange = 0.00f;
    this->SpecialAttackFireRate = 0.00f;
    this->WaitBeforeSpecial = 0.00f;
    this->WaitAfterSpecial = 0.00f;
    this->MinSpecialAttackCooldown = 0.00f;
    this->MaxSpecialAttackCooldown = 0.00f;
    this->BehaviourTree = NULL;
    this->UpdateTargetInterval = 0.00f;
    this->PowerDownAfterSeconds = -1.00f;
}

