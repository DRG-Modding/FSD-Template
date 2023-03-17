#include "SpecialAttackComponent.h"

void USpecialAttackComponent::TriggerAttack(FName Name) {
}

UAnimMontage* USpecialAttackComponent::SelectMontage_Implementation() const {
    return NULL;
}



void USpecialAttackComponent::OnMontageEnded(UAnimMontage* Montage, bool interrupted) {
}

void USpecialAttackComponent::OnFrozen_Implementation(bool IsFrozen) {
}

USpecialAttackComponent::USpecialAttackComponent() {
}

