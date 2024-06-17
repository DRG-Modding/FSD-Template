#include "PoseCorrectionComponent.h"

UPoseCorrectionComponent::UPoseCorrectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Enabled = false;
    this->FrontX = 40.00f;
    this->SideY = 60.00f;
    this->BackX = -40.00f;
}


