#include "CrossbowStuckProjectileEffectExploding.h"

class UHealthComponentBase;

void UCrossbowStuckProjectileEffectExploding::StartTimeoutTimer(UHealthComponentBase* destroyed) {
}

void UCrossbowStuckProjectileEffectExploding::EnableTimeOut() {
}

UCrossbowStuckProjectileEffectExploding::UCrossbowStuckProjectileEffectExploding() {
    this->ChemicalSoundCue = NULL;
    this->ChemicalAudioComponent = NULL;
    this->ChemicalReactionDelay = 5.00f;
}

