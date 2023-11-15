#include "ShieldLinkComponent.h"

UShieldLinkComponent::UShieldLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoostedStatusEffect = NULL;
    this->BoostedStatusEffectInstance = NULL;
    this->LinkDistance = 300.00f;
    this->LinkStatusEffect = NULL;
}

void UShieldLinkComponent::TimerFunction() {
}


