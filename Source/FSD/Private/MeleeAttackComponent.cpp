#include "MeleeAttackComponent.h"

UMeleeAttackComponent::UMeleeAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitValidator = NULL;
    this->CenterOnTarget = true;
}

UAnimMontage* UMeleeAttackComponent::SelectMontage_Implementation() const {
    return NULL;
}

void UMeleeAttackComponent::OnPerformAttack(FName Name) {
}

void UMeleeAttackComponent::OnMontageEnded(UAnimMontage* Montage, bool interrupted) {
}


