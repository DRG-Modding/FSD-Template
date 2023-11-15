#include "EscortMuleAttackerPositioning.h"

UEscortMuleAttackerPositioning::UEscortMuleAttackerPositioning(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FreePositions.AddDefaulted(32);
    this->FlyingFreePositions.AddDefaulted(32);
    this->Health = NULL;
}

void UEscortMuleAttackerPositioning::SetNewMaxAttackers(int32 newMaxAttackers) {
}

void UEscortMuleAttackerPositioning::SetCostModifier(float newModifier) {
}


