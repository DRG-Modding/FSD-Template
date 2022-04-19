#include "AttackBaseComponent.h"
#include "Templates/SubclassOf.h"

class UAttackBaseComponent;
class AActor;

UAttackBaseComponent* UAttackBaseComponent::ReplaceAttackComponent(UAttackBaseComponent* componentToReplace, TSubclassOf<UAttackBaseComponent> newComponentClass) {
    return NULL;
}




float UAttackBaseComponent::GetMinRange() const {
    return 0.0f;
}

float UAttackBaseComponent::GetMaxRange() const {
    return 0.0f;
}

void UAttackBaseComponent::CompleteAttack(bool success) {
}

void UAttackBaseComponent::AttackTarget(AActor* Target) {
}

void UAttackBaseComponent::AbortAttack() {
}

UAttackBaseComponent::UAttackBaseComponent() {
    this->MaxSurfaceAngle = 180.00f;
    this->MinRange = 0.00f;
    this->MaxRange = 200.00f;
}

