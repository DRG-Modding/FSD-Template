#include "SpecialAttackComponent.h"

USpecialAttackComponent::USpecialAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USpecialAttackComponent::TriggerAttack(FName Name) {
}

UAnimMontage* USpecialAttackComponent::SelectMontage_Implementation() const {
    return NULL;
}



void USpecialAttackComponent::OnMontageEnded(UAnimMontage* Montage, bool interrupted) {
}

void USpecialAttackComponent::OnFrozen_Implementation(bool IsFrozen) {
}


