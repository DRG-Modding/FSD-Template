#include "TerminatorShoutComponent.h"

class USoundCue;

void UTerminatorShoutComponent::SetShoutState(ETerminatorShoutState State, float delayShout) {
}


void UTerminatorShoutComponent::OnShoutInstancePlayStateChanged(EAudioComponentPlayState PlayState) {
}


void UTerminatorShoutComponent::All_PlayShout_Implementation(USoundCue* Shout) {
}

UTerminatorShoutComponent::UTerminatorShoutComponent() {
    this->TalkLight = NULL;
    this->MaxRadius = 100.00f;
    this->MaxIntensity = 10000.00f;
    this->OwnerMesh = NULL;
    this->ShoutInstance = NULL;
}

