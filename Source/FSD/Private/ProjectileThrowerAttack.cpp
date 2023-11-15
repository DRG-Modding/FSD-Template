#include "ProjectileThrowerAttack.h"

UProjectileThrowerAttack::UProjectileThrowerAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThrowerMesh = NULL;
    this->ThrowerAnimInstance = NULL;
    this->RotateToTarget = false;
}

void UProjectileThrowerAttack::OnThrowerMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UProjectileThrowerAttack::All_ShowThrowerAnimation_Implementation() {
}


