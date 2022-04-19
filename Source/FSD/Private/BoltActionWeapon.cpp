#include "BoltActionWeapon.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UPrimitiveComponent;

void ABoltActionWeapon::SetOverheated(bool isOverheated) {
}

void ABoltActionWeapon::Server_SetIsMovementSlowed_Implementation(bool bisMovementSlowed) {
}
bool ABoltActionWeapon::Server_SetIsMovementSlowed_Validate(bool bisMovementSlowed) {
    return true;
}

void ABoltActionWeapon::Server_SetIsLatestShotFocused_Implementation(bool bisShotFocused) {
}
bool ABoltActionWeapon::Server_SetIsLatestShotFocused_Validate(bool bisShotFocused) {
    return true;
}

void ABoltActionWeapon::Server_SetIsChargingShot_Implementation(bool bisCharging) {
}
bool ABoltActionWeapon::Server_SetIsChargingShot_Validate(bool bisCharging) {
    return true;
}

void ABoltActionWeapon::OnTimerElapsed() {
}

void ABoltActionWeapon::OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial, bool wasDirectHit) {
}

void ABoltActionWeapon::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}

void ABoltActionWeapon::OnShotPowerSet() {
}


void ABoltActionWeapon::Client_OnTargetKilled_Implementation(bool BoostReloadTime) {
}

void ABoltActionWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABoltActionWeapon, LastShotWasAimed);
    DOREPLIFETIME(ABoltActionWeapon, IsMovementSlowed);
}

ABoltActionWeapon::ABoltActionWeapon() {
    this->DamageComponent = NULL;
    this->HitscanComponent = NULL;
    this->FocusedHitSTE = NULL;
    this->RequireWeakspotForFocusedHitSTE = true;
    this->IsNoGravityOnFocusEnabled = false;
    this->NoGravityOnFocusDuration = 1.00f;
    this->NoGravityFocusFallFriction = 2.00f;
    this->NoGravityFocusGravityScale = 0.20f;
    this->ZoomSpreadAmount = 10.00f;
    this->ZoomMinSpreadWhileMoving = 0.00f;
    this->ChargeSpeed = 0.50f;
    this->ChargeAmmoCost = 2.00f;
    this->ChargeRecoilMult = 2.00f;
    this->ZoomedInAudio = NULL;
    this->ChargedShotTrailParticles = NULL;
    this->ButtonDownFireSound = NULL;
    this->ChargedShotFireSound = NULL;
    this->ChargedFoVChange = 15.00f;
    this->ChargedFoVFadeSpeed = 60.00f;
    this->MinCharge = 0.25f;
    this->SlowMovementAtCharge = 0.50f;
    this->FullChargeDamageBonus = 2.00f;
    this->AimedShotStaggerChance = 0.00f;
    this->AimedWeakspotKilLRange = 350.00f;
    this->TargetKilledReloadTimeBoost = 0.00f;
    this->TargetKilledReloadTimeBoostDuration = 0.00f;
    this->LastShotWasAimed = false;
    this->IsMovementSlowed = false;
    this->ChargeAffectsDamage = false;
    this->Charging = false;
    this->ChargeProgress = 0.00f;
}

