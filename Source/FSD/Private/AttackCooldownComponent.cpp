#include "AttackCooldownComponent.h"

UAttackCooldownComponent::UAttackCooldownComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAttackCooldownComponent::SetCooldown(const FName& AttackName, float cooldownSeconds) {
}

bool UAttackCooldownComponent::IsAttackOffCooldown(const FName& AttackName) const {
    return false;
}

bool UAttackCooldownComponent::IsAnyAttackOffCooldown() const {
    return false;
}

void UAttackCooldownComponent::AttackUsed(const FName& Name) {
}


