#include "CrossbowStuckProjectileEffectExploding.h"

UCrossbowStuckProjectileEffectExploding::UCrossbowStuckProjectileEffectExploding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChemicalSoundCue = NULL;
    this->ChemicalAudioComponent = NULL;
    this->ChemicalReactionDelay = 5.00f;
}

void UCrossbowStuckProjectileEffectExploding::StartTimeoutTimer(UHealthComponentBase* destroyed) {
}

void UCrossbowStuckProjectileEffectExploding::EnableTimeOut() {
}


