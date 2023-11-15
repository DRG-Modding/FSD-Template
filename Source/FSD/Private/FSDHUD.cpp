#include "FSDHUD.h"

AFSDHUD::AFSDHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->IsVisibleFlags = 0;
}

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



