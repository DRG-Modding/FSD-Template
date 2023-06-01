#include "InfectedStateComponent.h"

void UInfectedStateComponent::Server_Breakout_Implementation() {
}


UInfectedStateComponent::UInfectedStateComponent() {
    this->AudioFreeOfInfection = NULL;
    this->InfectedPhysicalMaterial = NULL;
    this->DwarfFleshMaterial = NULL;
    this->InfectedAffliction = NULL;
    this->InfectedMontage = NULL;
    this->InfectedAndBreakingFreeMontage = NULL;
    this->BreakingFreeMontageDuration = 0.75f;
    this->HoldToBreakTime = 0.25f;
}

