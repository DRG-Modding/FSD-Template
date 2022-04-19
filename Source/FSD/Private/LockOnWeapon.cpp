#include "LockOnWeapon.h"
#include "Net/UnrealNetwork.h"

class AActor;

void ALockOnWeapon::UpdateRifleEye() {
}


void ALockOnWeapon::Server_TriggerAoe_Implementation(FVector Location) {
}
bool ALockOnWeapon::Server_TriggerAoe_Validate(FVector Location) {
    return true;
}

void ALockOnWeapon::Server_SetTotalLockCount_Implementation(int32 totalLockCount) {
}

void ALockOnWeapon::Server_SetLockCount_Implementation(const FLockCounter& LockCounter) {
}

void ALockOnWeapon::Server_SetIsMovementSlowed_Implementation(bool bisMovementSlowed) {
}
bool ALockOnWeapon::Server_SetIsMovementSlowed_Validate(bool bisMovementSlowed) {
    return true;
}

void ALockOnWeapon::Server_SetIsLatestShotLockedOn_Implementation(bool bisShotLockedOn) {
}
bool ALockOnWeapon::Server_SetIsLatestShotLockedOn_Validate(bool bisShotLockedOn) {
    return true;
}

void ALockOnWeapon::Server_SetIsChargingShot_Implementation(bool bisCharging) {
}
bool ALockOnWeapon::Server_SetIsChargingShot_Validate(bool bisCharging) {
    return true;
}

void ALockOnWeapon::Server_PushStatusEffect_Implementation(AActor* Target) {
}

void ALockOnWeapon::Server_PopStatusEffect_Implementation(AActor* Target) {
}

void ALockOnWeapon::Server_FiringComplete_Implementation(int32 ShotsFired) {
}

void ALockOnWeapon::RefundAmmo_Implementation() {
}



void ALockOnWeapon::OnHitDeadTarget() {
}

void ALockOnWeapon::OnHit(const FHitResult& Hit, bool alwaysPenetrate) {
}

void ALockOnWeapon::OnAsyncFireComplete() {
}


void ALockOnWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALockOnWeapon, IsMovementSlowed);
    DOREPLIFETIME(ALockOnWeapon, LastShotWasLockedOn);
}

ALockOnWeapon::ALockOnWeapon() {
    this->AimTarget = NULL;
    this->LockOnDamageMultiplier = 1.00f;
    this->ShotsPerTarget = 2;
    this->MaxTargets = 4;
    this->TimeBetweenLockedShots = 0.20f;
    this->LockOnTime = 0.50f;
    this->MaxLockOnDegree = 15.00f;
    this->LoseLockOnDegree = 90.00f;
    this->DegreeTolerance = 2.00f;
    this->MaxLockOnRange = 10000.00f;
    this->bPrioritizeLowHitPoint = false;
    this->bAlwaysHitTarget = false;
    this->MaxLockOnDuration = -1.00f;
    this->bLockOnControlsSentryGun = false;
    this->bSentryGunShootsOnLockedShot = false;
    this->TrackingWidgetClass = NULL;
    this->LockOnBeamClass = NULL;
    this->AoeActorClass = NULL;
    this->AoeHitCountThreshhold = 0;
    this->UseLockOnTargetStatusEffect = false;
    this->LockOnTargetStatusEffect = NULL;
    this->PushStatusEffectEveryXLock = 1;
    this->LockOnCount = 0;
    this->DamageComponent = NULL;
    this->HitscanComponent = NULL;
    this->ChargeSpeed = 0.50f;
    this->SlowMovementAtCharge = 0.50f;
    this->FearEnabled = false;
    this->FearFactorBase = 0.00f;
    this->FearFactorPerShotBonus = 0.00f;
    this->FearRange = 500.00f;
    this->FearRangePerShotBonus = 0.00f;
    this->IsMovementSlowed = false;
    this->Charging = false;
    this->ChargeProgress = 0.00f;
    this->LastShotWasLockedOn = false;
    this->LockOnRecoilMult = 0.00f;
}

