#include "BezerkPerkComponent.h"

UBezerkPerkComponent::UBezerkPerkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoostedStat = NULL;
    this->AmountPerValue = 0.00f;
}

void UBezerkPerkComponent::OnHealthChanged(float Health) {
}


