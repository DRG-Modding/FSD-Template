#include "OxygenSourceComponent.h"

void UOxygenSourceComponent::OnTimerTick() {
}


UOxygenSourceComponent::UOxygenSourceComponent() {
    this->SourceRadius = 0.00f;
    this->CenterOffset = 0.00f;
    this->Mutator = NULL;
}

