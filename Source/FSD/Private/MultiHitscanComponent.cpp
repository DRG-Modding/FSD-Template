#include "MultiHitscanComponent.h"

void UMultiHitscanComponent::Server_RegisterHit_Implementation(const FMultiHitScanHits& hitResults) {
}
bool UMultiHitscanComponent::Server_RegisterHit_Validate(const FMultiHitScanHits& hitResults) {
    return true;
}

void UMultiHitscanComponent::All_ShowHit_Implementation(const FMultiHitScanHits& hitResults) {
}

UMultiHitscanComponent::UMultiHitscanComponent() {
    this->BulletsPerShot = 0;
    this->GeneralImpactAudioVolume = 1.00f;
    this->CountMultiHits = false;
}

