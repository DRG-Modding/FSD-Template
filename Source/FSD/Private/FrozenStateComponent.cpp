#include "FrozenStateComponent.h"

UFrozenStateComponent::UFrozenStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 10;
    this->SlowAnimationSpeed = 2.00f;
}

void UFrozenStateComponent::Server_ThawPlayer_Implementation(float Percent) {
}


USoundBase* UFrozenStateComponent::GetAudioIceTap() const {
    return NULL;
}

USoundBase* UFrozenStateComponent::GetAudioFreezeStart() const {
    return NULL;
}


