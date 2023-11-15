#include "DynamicReverbComponent.h"

UDynamicReverbComponent::UDynamicReverbComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LargeCaveValue = 2000.00f;
    this->MediumCaveValue = 1000.00f;
    this->SmallCaveValue = 500.00f;
    this->FadeTime = 1.00f;
    this->Priority = 1.00f;
    this->TunnelAmbienceFadeIn = 0.00f;
    this->TunnelAmbienceFadeOut = 1.00f;
    this->TunnelSoundInstance = NULL;
}

void UDynamicReverbComponent::TunnelTimerTriggered() {
}

void UDynamicReverbComponent::TimerTriggered() {
}


