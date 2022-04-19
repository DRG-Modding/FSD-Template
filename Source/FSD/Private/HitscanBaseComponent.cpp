#include "HitscanBaseComponent.h"

void UHitscanBaseComponent::Server_StopFire_Implementation() {
}
bool UHitscanBaseComponent::Server_StopFire_Validate() {
    return true;
}

void UHitscanBaseComponent::Server_RemoveDebris_Implementation(int32 instance, int32 Component) {
}
bool UHitscanBaseComponent::Server_RemoveDebris_Validate(int32 instance, int32 Component) {
    return true;
}

float UHitscanBaseComponent::GetCurrentVerticalSpread() const {
    return 0.0f;
}

float UHitscanBaseComponent::GetCurrentHorizontalSpread() const {
    return 0.0f;
}

UHitscanBaseComponent::UHitscanBaseComponent() {
    this->SpreadPerShot = 2.00f;
    this->DamageComponent = NULL;
    this->UseDamageComponent = true;
    this->Damage = 0.00f;
    this->ArmorDamageMultiplier = 1.00f;
    this->DamageClass = NULL;
    this->WeakpointDamageMultiplier = 1.00f;
    this->MaxPenetrations = 0;
    this->ImpactDecalSize = EImpactDecalSize::Small;
    this->friendlyFireModifier = 1.00f;
    this->UseDynamicSpread = false;
    this->MinSpread = 0.00f;
    this->MinSpreadWhenMoving = 0.00f;
    this->MinSpreadWhenSprinting = 0.00f;
    this->MaxSpread = 5.00f;
    this->SpreadRecoveryPerSecond = 5.00f;
    this->VerticalSpreadMultiplier = 1.00f;
    this->HorizontalSpredMultiplier = 1.00f;
    this->MaxVerticalSpread = 0.00f;
    this->MaxHorizontalSpread = 0.00f;
    this->RicochetBehavior = ERicochetBehavior::All;
    this->RicochetChance = 0.00f;
    this->RicochetOnWeakspotOnly = false;
    this->RicochetMaxRange = 1500.00f;
}

