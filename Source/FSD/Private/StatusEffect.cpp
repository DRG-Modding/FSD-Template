#include "StatusEffect.h"
#include "Templates/SubclassOf.h"

class AActor;
class UStatusEffect;

bool UStatusEffect::ShouldInstantiate_Implementation() const {
    return false;
}

float UStatusEffect::GetStatusEffectDuration(TSubclassOf<UStatusEffect> StatusEffect) {
    return 0.0f;
}

bool UStatusEffect::CanTrigger(AActor* Target) const {
    return false;
}

UStatusEffect::UStatusEffect() {
    this->PawnAffliction = NULL;
    this->MaxResistance = 1.00f;
    this->DamageClass = NULL;
    this->ExclusiveKey = NULL;
    this->CanStack = false;
    this->MaxStack = 10;
    this->Duration = -1.00f;
    this->ApplyDurationAfterPop = false;
    this->RemoveOnDeath = true;
    this->RemoveOnTemperatureStateChange = false;
}

