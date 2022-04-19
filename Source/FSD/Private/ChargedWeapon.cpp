#include "ChargedWeapon.h"
#include "Net/UnrealNetwork.h"

void AChargedWeapon::SetOverheated(bool isOverheated) {
}

void AChargedWeapon::Server_SetIsCharging_Implementation(bool isCharging) {
}





void AChargedWeapon::OnRep_Charging() {
}

bool AChargedWeapon::GetIsCharging() const {
    return false;
}

void AChargedWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AChargedWeapon, Charging);
}

AChargedWeapon::AChargedWeapon() {
    this->FP_OverheatAnim = NULL;
    this->WeaponOverheatAnim = NULL;
    this->FP_ChargeupMontage = NULL;
    this->TP_ChargeupMontage = NULL;
    this->ChargeupParticles = NULL;
    this->ChargeupParticleInstance = NULL;
    this->ChargeupFireMuzzleFlash = NULL;
    this->NormalFiresound = NULL;
    this->FullyChargedFireSound = NULL;
    this->ChargeSpeed = 0.50f;
    this->Charging = false;
    this->ChargeProgress = 0.00f;
    this->ShotCostAtBelowFullCharge = 1;
    this->ShotCostAtFullCharge = 10;
    this->ChargedShotsOnly = false;
    this->AutoFireWhenOverheated = true;
    this->TotalHeat = 0.00f;
    this->CoolingRate = 0.60f;
    this->HeatPerSecondWhileCharging = 0.05f;
    this->HeatPerSecondWhenCharged = 0.05f;
    this->HeatPerNormalShot = 0.20f;
    this->HeatPerChargedShot = 0.40f;
}

