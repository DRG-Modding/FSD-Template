#include "FSDFlyingBugController.h"

AFSDFlyingBugController::AFSDFlyingBugController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BehaviourTree = NULL;
    this->UpdateLosInterval = -1.00f;
    this->SetTargetOnAlert = true;
    this->SyncTargetWithBB = true;
}

void AFSDFlyingBugController::OnFlyingBugAlerted() {
}


