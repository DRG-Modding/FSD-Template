#include "AimingFacilityTurret.h"
#include "Net/UnrealNetwork.h"

class UParticleSystemComponent;

void AAimingFacilityTurret::SetupAimindicator(UParticleSystemComponent* NewAimIndicator, UParticleSystemComponent* NewAimIndicatorLock) {
}

void AAimingFacilityTurret::OnRep_IsLockedOn() {
}

void AAimingFacilityTurret::OnRep_IndicatorMode() {
}


void AAimingFacilityTurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAimingFacilityTurret, IsLockedOn);
    DOREPLIFETIME(AAimingFacilityTurret, IndicatorMode);
}

AAimingFacilityTurret::AAimingFacilityTurret() {
    this->IsLockedOn = false;
    this->aimIndicator = NULL;
    this->aimIndicatorLock = NULL;
    this->LockOnTime = 0.50f;
    this->BurstInterval = 0.50f;
    this->FireInterval = 0.10f;
    this->TurretRotationSpeed = 5.00f;
    this->InitialLockonDelay = 0.00f;
    this->RegainLosLockonModifier = 1.00f;
    this->AimZOffset = 0.00f;
    this->TargetLeadingStrength = 0.00f;
    this->TargetLeadingResponsiveness = 1.00f;
    this->RaimainAfterShotTime = 0.25f;
    this->TargetLeadingAfterLockonMultiplier = 1.00f;
    this->TurningSpeedAfterLockOnMultipier = 1.00f;
    this->PreLockonTargetChangeChance = 0.00f;
    this->PreLockongTargetChangeRate = 0.00f;
    this->IndicatorFlashTime = 1.00f;
    this->TrackTargetAfterLockon = false;
    this->ConstantAimAfterLock = false;
    this->UseTraceForLockOn = false;
    this->IndicatorMode = EIndicatorMode::EConstant;
}

