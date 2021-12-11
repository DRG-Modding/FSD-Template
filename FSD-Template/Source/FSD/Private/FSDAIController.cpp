#include "FSDAIController.h"

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

AFSDAIController::AFSDAIController() {
    this->LOSTraceChannel = ECC_GameTraceChannel3;
}

