#include "MeleeAttackComponent.h"

UAnimMontage* UMeleeAttackComponent::SelectMontage_Implementation() const {
    return NULL;
}

void UMeleeAttackComponent::OnPerformAttack(FName Name) {
}

void UMeleeAttackComponent::OnMontageEnded(UAnimMontage* Montage, bool interrupted) {
}

UMeleeAttackComponent::UMeleeAttackComponent() {
    this->HitValidator = NULL;
    this->CenterOnTarget = true;
}

