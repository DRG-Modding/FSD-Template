#include "FSDPlayerControllerBase.h"

class UPlayerCharacterID;

void AFSDPlayerControllerBase::ToggleAnalogCursor(bool Visible) {
}

void AFSDPlayerControllerBase::StopAspectRatioAxisConstraint() {
}

void AFSDPlayerControllerBase::StartAspectRatioAxisConstraint() {
}

void AFSDPlayerControllerBase::SetHUDVisible(bool IsVisible, EHUDVisibilityReason reason) {
}

void AFSDPlayerControllerBase::Server_Cheat_SwitchCharacter_Implementation(UPlayerCharacterID* NewCharacter) {
}



bool AFSDPlayerControllerBase::IsHUDVisibleFlagSet(EHUDVisibilityReason reason) {
    return false;
}

void AFSDPlayerControllerBase::Client_WasKicked_Implementation(EDisconnectReason reason) {
}

AFSDPlayerControllerBase::AFSDPlayerControllerBase() {
    this->bStartWithBlackScreen = true;
}

