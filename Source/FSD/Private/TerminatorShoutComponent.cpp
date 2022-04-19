#include "TerminatorShoutComponent.h"

class USoundCue;

void UTerminatorShoutComponent::SetShoutState(ETerminatorShoutState State, float delayShout) {
}

void UTerminatorShoutComponent::All_PlayShout_Implementation(USoundCue* Shout) {
}

UTerminatorShoutComponent::UTerminatorShoutComponent() {
    this->OwnerMesh = NULL;
    this->ShoutInstance = NULL;
}

