#include "FSDFlyingBugController.h"

void AFSDFlyingBugController::OnFlyingBugAlerted() {
}

AFSDFlyingBugController::AFSDFlyingBugController() {
    this->BehaviourTree = NULL;
    this->UpdateLosInterval = -1.00f;
    this->SetTargetOnAlert = true;
    this->SyncTargetWithBB = true;
}

