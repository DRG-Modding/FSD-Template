#include "DebrisItemComponent.h"

UDebrisItemComponent::UDebrisItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Debris = NULL;
    this->ItemPass = EDebrisItemPass::Main;
    this->InfluenceRange = 0.00f;
    this->MinDistanceToImportantLocations = -1.00f;
    this->UseAmount = false;
    this->AmountSearchMultiplier = 25;
}


