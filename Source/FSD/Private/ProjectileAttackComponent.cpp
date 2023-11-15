#include "ProjectileAttackComponent.h"

UProjectileAttackComponent::UProjectileAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ManualyComplete = false;
}

void UProjectileAttackComponent::AddAttackMontage(UAnimMontage* attackMontage) {
}


