#include "PropHuntSettings.h"

UPropHuntSettings::UPropHuntSettings() {
    this->MaxAmmo = 10;
    this->BonusAmmoOnHit = 3;
}

void UPropHuntSettings::PlayEventAudio(APawn*& InCharacter, TEnumAsByte<EPropHuntEvent> InEvent, bool InPlay2D) const {
}

void UPropHuntSettings::GetHunterThrowableImpactFX(UObject* WorldContext, AActor* InHitActor, USoundCue*& OutSound, UNiagaraSystem*& OutParticles) const {
}


