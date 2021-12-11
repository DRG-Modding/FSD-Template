#include "AutoCannon.h"

void AAutoCannon::Server_SetStatusActive_Implementation(bool IsActive) {
}
bool AAutoCannon::Server_SetStatusActive_Validate(bool IsActive) {
    return true;
}

AAutoCannon::AAutoCannon() {
    this->StartingFireRate = 3.00f;
    this->MaxFireRate = 5.50f;
    this->FireTimeReductionScale = 5.00f;
    this->FireTimeIncreaseScale = 1.00f;
    this->MaxFireTimeCap = 5.00f;
    this->DamageBonusAtFullROF = 1.00f;
    this->StatusEffectAtFullROF = false;
    this->FireTimeOffsetForMaxRateOfFireBonus = -0.50f;
    this->StartLoopingSoundAt = 1.00f;
    this->StatusAtFullROF = NULL;
    this->WPN_Fire_2 = NULL;
    this->CurrentFireTime = 0.00f;
}

