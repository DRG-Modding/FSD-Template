#include "StatusEffectsFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class AActor;
class UStatusEffect;
class UDamageClass;

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

