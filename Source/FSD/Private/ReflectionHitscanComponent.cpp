#include "ReflectionHitscanComponent.h"

void UReflectionHitscanComponent::Server_RegisterHit_Reflection_Implementation(const FReflectiveHitscanHit& Hit) {
}

void UReflectionHitscanComponent::Server_RegisterHit_Implementation(const FReflectiveHitscanHit& Hit) {
}
bool UReflectionHitscanComponent::Server_RegisterHit_Validate(const FReflectiveHitscanHit& Hit) {
    return true;
}

void UReflectionHitscanComponent::All_ShowHit_Implementation(const FReflectiveHitscanHit& Hit) {
}

UReflectionHitscanComponent::UReflectionHitscanComponent() {
    this->PlatformTerrainType = NULL;
    this->bPlayImpactSound = true;
    this->bShowImpactOnReflections = false;
    this->bDamageOnReflections = false;
    this->StraightenReflectionFactor = 0.40f;
    this->ReflectionCount = 0;
}

