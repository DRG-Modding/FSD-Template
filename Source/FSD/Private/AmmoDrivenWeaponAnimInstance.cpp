#include "AmmoDrivenWeaponAnimInstance.h"

bool UAmmoDrivenWeaponAnimInstance::IsFull() const {
    return false;
}

bool UAmmoDrivenWeaponAnimInstance::isEmpty() const {
    return false;
}

UAmmoDrivenWeaponAnimInstance::UAmmoDrivenWeaponAnimInstance() {
    this->Weapon = NULL;
    this->IsFiring = false;
    this->ClipFullPercentage = 0.00f;
    this->Overheated = false;
    this->Temperature = 0.00f;
}

