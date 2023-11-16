#include "InfectedStateComponent.h"

UInfectedStateComponent::UInfectedStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 18;
    this->AudioFreeOfInfection = NULL;
    this->InfectedPhysicalMaterial = NULL;
    this->DwarfFleshMaterial = NULL;
    this->InfectedAffliction = NULL;
    this->InfectedMontage = NULL;
    this->InfectedAndBreakingFreeMontage = NULL;
    this->BreakingFreeMontageDuration = 0.75f;
}

void UInfectedStateComponent::Server_Breakout_Implementation() {
}



