#include "BoxGenerationComponent.h"

UBoxGenerationComponent::UBoxGenerationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsCarver = false;
    this->NoiseRange = 0.00f;
    this->Visible = true;
    this->Noise = NULL;
}


