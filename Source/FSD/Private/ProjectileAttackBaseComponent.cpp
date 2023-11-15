#include "ProjectileAttackBaseComponent.h"

UProjectileAttackBaseComponent::UProjectileAttackBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SocketName = TEXT("RangedAttack");
    this->RotationHandling = EProjectileAttackRotationType::NoTarget_ActorForward;
    this->FinalValidationCheck = NULL;
    this->ProjectilesIgnoreEachOther = false;
}

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


