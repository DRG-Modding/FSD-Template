#include "FSDHUD.h"

class APlayerController;
class AFSDHUD;

bool AFSDHUD::ToggleHUDVisibility(EHUDVisibilityReason reason) {
    return false;
}


void AFSDHUD::SetHUDVisible(bool IsVisible, EHUDVisibilityReason reason) {
}




bool AFSDHUD::IsHUDVisibleFlagSet(EHUDVisibilityReason reason) const {
    return false;
}


bool AFSDHUD::GetHUDVisible() const {
    return false;
}

AFSDHUD* AFSDHUD::GetFSDHUD(APlayerController* InPlayerController) {
    return NULL;
}


AFSDHUD::AFSDHUD() {
    this->IsVisibleFlags = 0;
}

