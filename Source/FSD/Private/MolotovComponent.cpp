#include "MolotovComponent.h"

UMolotovComponent::UMolotovComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Positioning = NULL;
    this->BurningFlamesClass = NULL;
    this->Radius = 500.00f;
}

void UMolotovComponent::Trigger() {
}


