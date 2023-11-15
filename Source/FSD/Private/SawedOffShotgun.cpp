#include "SawedOffShotgun.h"
#include "DamageComponent.h"

ASawedOffShotgun::ASawedOffShotgun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->ShockWaveDamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("ShockwaveDamage"));
    this->FearFactorOnFire = 0.00f;
    this->FearFactorOnFireRadius = 500.00f;
    this->ShotgunJumpEnabled = false;
    this->ShotgunJumpForce = 4000.00f;
    this->ShockwaveEnabled = false;
    this->ShockWaveDistance = 250.00f;
    this->ShockWaveRadius = 100.00f;
    this->ShockWaveLength = 200.00f;
}

void ASawedOffShotgun::SetShockWaveDamageComponent(UDamageComponent* Component) {
}


