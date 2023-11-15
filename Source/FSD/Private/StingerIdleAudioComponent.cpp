#include "StingerIdleAudioComponent.h"

UStingerIdleAudioComponent::UStingerIdleAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeInTime = 0.20f;
    this->FadeOutTime = 0.50f;
}


