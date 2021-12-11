#include "GooGunAnimInstance.h"

void UGooGunAnimInstance::SetTargetBarrelRotationRate(float RotationRate) {
}

UGooGunAnimInstance::UGooGunAnimInstance() {
    this->isCharging = false;
    this->ChargePercentVisual = 0.00f;
    this->ChargePercent = 0.00f;
    this->OverChargePercent = 0.00f;
    this->BarrelRotationRate = 1.00f;
}

