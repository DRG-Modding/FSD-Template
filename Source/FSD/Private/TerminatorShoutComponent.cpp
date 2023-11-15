#include "TerminatorShoutComponent.h"

UTerminatorShoutComponent::UTerminatorShoutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TalkLight = NULL;
    this->MaxRadius = 100.00f;
    this->MaxIntensity = 10000.00f;
    this->OwnerMesh = NULL;
    this->ShoutInstance = NULL;
}

void UTerminatorShoutComponent::SetShoutState(ETerminatorShoutState State, float delayShout) {
}


void UTerminatorShoutComponent::OnShoutInstancePlayStateChanged(EAudioComponentPlayState PlayState) {
}


void UTerminatorShoutComponent::All_PlayShout_Implementation(USoundCue* Shout) {
}


