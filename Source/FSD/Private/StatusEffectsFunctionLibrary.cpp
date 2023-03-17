#include "StatusEffectsFunctionLibrary.h"
#include "Templates/SubclassOf.h"

float UStatusEffectsFunctionLibrary::GetMaxResistance(TSubclassOf<UStatusEffect> StatusEffect) {
    return 0.0f;
}

UDamageClass* UStatusEffectsFunctionLibrary::GetDamageClass(TSubclassOf<UStatusEffect> StatusEffect) {
    return NULL;
}

bool UStatusEffectsFunctionLibrary::CanTrigger(TSubclassOf<UStatusEffect> StatusEffect, AActor* OtherActor) {
    return false;
}

UStatusEffectsFunctionLibrary::UStatusEffectsFunctionLibrary() {
}

