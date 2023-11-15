#include "AmmoDrivenWeaponAnimInstance.h"

UAmmoDrivenWeaponAnimInstance::UAmmoDrivenWeaponAnimInstance() {
    this->Weapon = NULL;
    this->IsFiring = false;
    this->ClipFullPercentage = 0.00f;
    this->overHeated = false;
    this->Temperature = 0.00f;
}

bool UAmmoDrivenWeaponAnimInstance::IsFull() const {
    return false;
}

bool UAmmoDrivenWeaponAnimInstance::isEmpty() const {
    return false;
}


