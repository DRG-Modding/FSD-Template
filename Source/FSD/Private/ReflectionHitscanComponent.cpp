#include "ReflectionHitscanComponent.h"

UReflectionHitscanComponent::UReflectionHitscanComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlatformTerrainType = NULL;
    this->bPlayImpactSound = true;
    this->bShowImpactOnReflections = false;
    this->bDamageOnReflections = false;
    this->StraightenReflectionFactor = 0.40f;
    this->ReflectionCount = 0;
}

void UReflectionHitscanComponent::Server_RegisterHit_Reflection_Implementation(const FReflectiveHitscanHit& Hit) {
}

void UReflectionHitscanComponent::Server_RegisterHit_Implementation(const FReflectiveHitscanHit& Hit) {
}

void UReflectionHitscanComponent::All_ShowHit_Implementation(const FReflectiveHitscanHit& Hit) {
}


