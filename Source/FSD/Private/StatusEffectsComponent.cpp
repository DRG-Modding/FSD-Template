#include "StatusEffectsComponent.h"
#include "Templates/SubclassOf.h"

class UObject;
class AActor;
class UHealthComponentBase;
class UStatusEffect;

bool UStatusEffectsComponent::TryPushActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Target, AActor* Owner) {
    return false;
}

bool UStatusEffectsComponent::TryPopActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Target, AActor* Owner) {
    return false;
}

bool UStatusEffectsComponent::PushActiveStatusEffectInstance(UStatusEffect* StatusEffect, AActor* Owner) {
    return false;
}

bool UStatusEffectsComponent::PushActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Owner) {
    return false;
}

void UStatusEffectsComponent::PopAllActiveStatusEffectsOfType(TSubclassOf<UStatusEffect> StatusEffect, AActor* Owner) {
}

void UStatusEffectsComponent::PopAllActiveStatusEffects(AActor* Owner) {
}

bool UStatusEffectsComponent::PopActiveStatusEffectInstance(UStatusEffect* StatusEffect, AActor* Owner) {
    return false;
}

bool UStatusEffectsComponent::PopActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Owner) {
    return false;
}

void UStatusEffectsComponent::OnDeath(UHealthComponentBase* HealthComponent) {
}

bool UStatusEffectsComponent::HasActiveEffect(TSubclassOf<UStatusEffect> StatusEffect) const {
    return false;
}

UStatusEffect* UStatusEffectsComponent::CreateStatusEffectInstance(TSubclassOf<UStatusEffect> StatusEffect, UObject* Owner) {
    return NULL;
}

UStatusEffectsComponent::UStatusEffectsComponent() {
    this->OwnerHealth = NULL;
    this->IgnoreAll = false;
}

