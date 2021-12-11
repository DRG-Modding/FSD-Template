#include "MicroMissileLauncherAnimInstance.h"

class UAnimMontage;

void UMicroMissileLauncherAnimInstance::OnMontageEndedInternal(UAnimMontage* Montage, bool interrupted) {
}

UMicroMissileLauncherAnimInstance::UMicroMissileLauncherAnimInstance() {
    this->Weapon = NULL;
}

