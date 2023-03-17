#include "ProjectileThrowerAttack.h"

void UProjectileThrowerAttack::OnThrowerMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UProjectileThrowerAttack::All_ShowThrowerAnimation_Implementation() {
}

UProjectileThrowerAttack::UProjectileThrowerAttack() {
    this->ThrowerMesh = NULL;
    this->ThrowerAnimInstance = NULL;
    this->RotateToTarget = false;
}

