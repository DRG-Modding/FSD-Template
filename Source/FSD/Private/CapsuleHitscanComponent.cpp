#include "CapsuleHitscanComponent.h"

UCapsuleHitscanComponent::UCapsuleHitscanComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageEnhancer = NULL;
    this->range = 1000.00f;
    this->Width = 300.00f;
    this->ShowPhysMatImpact = true;
    this->ShowPhysMatDecal = true;
    this->PlayPhysMatSound = true;
}

void UCapsuleHitscanComponent::Server_RegisterHit_Implementation(const FMultiHitScanHits& hitResults) {
}

void UCapsuleHitscanComponent::All_ShowHit_Implementation(const FMultiHitScanHits& hitResults) {
}


