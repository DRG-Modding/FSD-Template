#include "FSDAIController.h"

AFSDAIController::AFSDAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_PathFollowingComponent = GetClass()->FindPropertyByName("PathFollowingComponent");
    (*p_PathFollowingComponent->ContainerPtrToValuePtr<UPathFollowingComponent*>(this)) = NULL;
    this->LOSTraceChannel = ECC_GameTraceChannel3;
}

void AFSDAIController::SetAlerted(bool isAlerted) {
}

void AFSDAIController::ResumeLogic() {
}

void AFSDAIController::RegisterBlackboardChanges(const FName& Key) {
}


void AFSDAIController::PauseLogic() {
}

void AFSDAIController::OnAttackingChanged(bool attacking) {
}

bool AFSDAIController::GetIsAlerted() const {
    return false;
}


