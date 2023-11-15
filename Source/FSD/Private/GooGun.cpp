#include "GooGun.h"

AGooGun::AGooGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChargeTime = 2.00f;
    this->ShotCostCharged = 10;
    this->ChargeThreshold = 0.20f;
    this->AutoStopCharingAfterSeconds = 4.00f;
    this->ShotCostCycle = 20;
    this->FireMode = EGooGunFireMode::Normal;
    this->FullyChargedFireSound = NULL;
    this->ChargedShotCount = 1;
    this->BuckShotSpreadV = 6.00f;
    this->BuckShotSpreadH = 8.00f;
    this->BuckshotArcCompensation = 11.00f;
    this->ChargeupParticles = NULL;
    this->ChargeupFireMuzzleFlash = NULL;
    this->ChargeupParticleInstance = NULL;
    this->FP_ChargeupMontage = NULL;
    this->TP_ChargeupMontage = NULL;
}


float AGooGun::GetOverChargeProgress() const {
    return 0.0f;
}

bool AGooGun::GetIsCharging() {
    return false;
}

float AGooGun::GetChargeProgress() const {
    return 0.0f;
}


