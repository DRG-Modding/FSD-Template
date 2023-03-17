#include "Crossbow.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"


void ACrossbow::StartAmmoSwitch() {
}


void ACrossbow::SetAnimatedTPMeshComponent(UStaticMeshComponent* Component) {
}


void ACrossbow::SetAnimatedFPMeshComponent(UStaticMeshComponent* Component) {
}

void ACrossbow::Server_UpdateRetrievableArrows_Implementation(const int32& defaultAmmo, const int32& specialAmmo) {
}

void ACrossbow::Server_SwitchAmmoType_Implementation(UProjectileLauncherBaseComponent* projectileLauncher, const ECrossbowSwitchState State) {
}

void ACrossbow::Server_SetSwitchIsQueued_Implementation(bool IsQueued) {
}

void ACrossbow::OnRep_SwitchIsQueued() {
}

void ACrossbow::OnRep_IsDefaultArrowEquipped() {
}

void ACrossbow::OnProjectileFired(AProjectileBase* Projectile) {
}

int32 ACrossbow::GetTotalArrowCount(bool InDefaultArrowCount) const {
    return 0;
}

float ACrossbow::GetSpecialArrowEffectDuration(const TSubclassOf<UStatusEffect>& Effect) const {
    return 0.0f;
}

bool ACrossbow::GetIsDefaultArrowEquipped() const {
    return false;
}

void ACrossbow::DestroyActor(AActor* Actor) {
}

void ACrossbow::Client_RefillSpecialAmmo_Implementation(float percentage) {
}

void ACrossbow::Client_CallAddSpecialAmmo_Implementation(const int32& Amount) {
}

void ACrossbow::Client_CallAddDefaultAmmo_Implementation(const int32& Amount) {
}

void ACrossbow::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrossbow, SpecialArrow);
    DOREPLIFETIME(ACrossbow, SpecialStatusEffectBonusTimeScale);
    DOREPLIFETIME(ACrossbow, IsDefaultArrowEquipped);
    DOREPLIFETIME(ACrossbow, SwitchIsQueued);
    DOREPLIFETIME(ACrossbow, SwitchState);
}

ACrossbow::ACrossbow() {
    this->FullDamageSpeed = 1000.00f;
    this->DefaultArrow = NULL;
    this->SpecialArrow = NULL;
    this->SpecialStatusEffectBonusTimeScale = 1.00f;
    this->BattleFrenzyStatusEffect = NULL;
    this->BasicSpawnableStuckProjectile = NULL;
    this->SpecialAmmoMax = 0;
    this->SwitchTime = 0.10f;
    this->CanTrifork = false;
    this->IsDefaultArrowEquipped = true;
    this->RecallProgress = 0.00f;
    this->AnimatedFPMesh = NULL;
    this->AnimatedTPMesh = NULL;
    this->SwitchIsQueued = false;
    this->SwitchState = ECrossbowSwitchState::Normal;
    this->OutOfAmmoSwapDelay = 0.50f;
    this->AnimatedArrowSpawnable = NULL;
    this->ExtraShotAngleDifference = 10.00f;
    this->HoveringRecallable = NULL;
    this->SwitchTimeCof = 1.00f;
    this->TriforkArrowMesh = NULL;
    this->QuintPackArrowMesh = NULL;
    this->SwitchMontage = NULL;
    this->SwitchMontage_TP = NULL;
    this->CharacterSwitchMontage = NULL;
    this->ReloadMontage = NULL;
    this->ReloadMontage_TP = NULL;
    this->CharacterReloadMontage = NULL;
}

