#include "ProjectileAttackBaseComponent.h"

class AActor;
class UAnimMontage;

bool UProjectileAttackBaseComponent::TriggerMontage(AActor* Target) {
    return false;
}

UAnimMontage* UProjectileAttackBaseComponent::SelectMontage_Implementation() const {
    return NULL;
}

void UProjectileAttackBaseComponent::OnPerformAttack() {
}

void UProjectileAttackBaseComponent::OnMontageEnded(UAnimMontage* Montage, bool interrupted) {
}

void UProjectileAttackBaseComponent::MulticastProjectileFired_Implementation() {
}

void UProjectileAttackBaseComponent::CancelMontage() {
}

UProjectileAttackBaseComponent::UProjectileAttackBaseComponent() {
    this->SocketName = TEXT("RangedAttack");
    this->RotationHandling = EProjectileAttackRotationType::NoTarget_ActorForward;
    this->ProjectilesIgnoreEachOther = false;
}

