#include "ChargedWeaponAnimInstance.h"

UChargedWeaponAnimInstance::UChargedWeaponAnimInstance() {
    this->isCharging = false;
    this->ChargeupPlayRate = 1.00f;
    this->ChargeupPlayRateSpeedChange = 1.00f;
    this->ChargedownPlayRateSpeedChange = 3.00f;
    this->MaxChargeupPlayRate = 2.50f;
    this->Weapon = NULL;
}

