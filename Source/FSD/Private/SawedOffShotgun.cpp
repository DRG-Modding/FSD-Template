#include "SawedOffShotgun.h"

class UDamageComponent;

void ASawedOffShotgun::SetShockWaveDamageComponent(UDamageComponent* Component) {
}

ASawedOffShotgun::ASawedOffShotgun() {
    this->FearFactorOnFire = 0.00f;
    this->FearFactorOnFireRadius = 500.00f;
    this->ShotgunJumpEnabled = false;
    this->ShotgunJumpForce = 4000.00f;
    this->ShockwaveEnabled = false;
    this->ShockWaveDistance = 250.00f;
    this->ShockWaveRadius = 100.00f;
    this->ShockWaveLength = 200.00f;
}

