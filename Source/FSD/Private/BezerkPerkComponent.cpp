#include "BezerkPerkComponent.h"

void UBezerkPerkComponent::OnHealthChanged(float Health) {
}

UBezerkPerkComponent::UBezerkPerkComponent() {
    this->BoostedStat = NULL;
    this->AmountPerValue = 0.00f;
}

