#include "MicroMissileLauncher.h"

void AMicroMissileLauncher::Server_SetIsCharging_Implementation(bool isCharging) {
}

void AMicroMissileLauncher::Server_SetChargedMissile_Implementation(bool isCharged) {
}

bool AMicroMissileLauncher::IsNextShotBuckShot() {
    return false;
}

int32 AMicroMissileLauncher::GetChargeCurrentFireCount() {
    return 0;
}

void AMicroMissileLauncher::All_SetChargedMissile_Implementation(bool isCharged) {
}

AMicroMissileLauncher::AMicroMissileLauncher() {
    this->ChargeTime = 2.00f;
    this->ChargeMaxFireCount = 9;
    this->BuckShotDelay = 2.00f;
    this->ShotDirectionHorizontalDegreeOffset = 0.00f;
    this->ShotDirectionVerticleDegreeOffset = 0.00f;
    this->FireMode = EMicroMissileLauncherFireMode::Normal;
    this->DisableHomingOnRelease = false;
    this->MaxHomingProjectiles = 0.00f;
    this->WPN_Fire_Empty_Mag = NULL;
    this->WPN_Fire_Level2 = NULL;
    this->WPN_Fire_Level2_Empty_Mag = NULL;
    this->WPN_Fire_Level3 = NULL;
    this->WPN_Fire_Level3_Empty_Mag = NULL;
    this->WPN_Mag_Feed = NULL;
    this->WPN_Mag_And_Barrel_Feed = NULL;
    this->ChargedMissileFireSound = NULL;
}

