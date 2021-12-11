#include "PlatformGunAnimInstance.h"

void UPlatformGunAnimInstance::WeaponFired() {
}

UPlatformGunAnimInstance::UPlatformGunAnimInstance() {
    this->SpinRate = 1.00f;
    this->NormalSpinRate = 1.00f;
    this->LerpSpeed = 2.00f;
    this->FiredSpinRate = 10.00f;
}

