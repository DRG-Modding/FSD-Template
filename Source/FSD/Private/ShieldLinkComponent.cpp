#include "ShieldLinkComponent.h"

void UShieldLinkComponent::TimerFunction() {
}

UShieldLinkComponent::UShieldLinkComponent() {
    this->BoostedStatusEffect = NULL;
    this->BoostedStatusEffectInstance = NULL;
    this->LinkDistance = 300.00f;
    this->LinkStatusEffect = NULL;
}

