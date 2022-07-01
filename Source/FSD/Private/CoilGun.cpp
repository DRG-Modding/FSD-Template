#include "CoilGun.h"
#include "NiagaraComponent.h"
#include "DamageComponent.h"
#include "CoilgunTrailSpawner.h"

class UHealthComponentBase;
class ACoilgunWeaponTrail;
class UPrimitiveComponent;
class UFSDPhysicalMaterial;
class AActor;

void ACoilGun::UpdateAfflictions() {
}

void ACoilGun::SetDynamicMaterials() {
}

void ACoilGun::Server_ToggleCharingBonuses_Implementation(bool Enabled) {
}

void ACoilGun::Server_SpawnTrail_Implementation(const FVector_NetQuantize& Location, const FRotator& Rotation, float HalfHeight, bool fireTrailEnabled) {
}

void ACoilGun::Server_SpawnGroundTrail_Implementation(const FVector_NetQuantize& Location, const FVector& Direction, float chargeMultiplier) {
}

void ACoilGun::Server_RegisterPrimaryHit_Implementation(UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, const FVector_NetQuantize& Origin, const FVector_NetQuantize& Location, int32 BoneIndex, FShotMultiplier Multiplier, int32 mole) {
}

void ACoilGun::Server_RegisterBonusHit_Implementation(AActor* Target) {
}

void ACoilGun::Server_RegisterBlastHit_Implementation(AActor* Target, const FVector_NetQuantize& Location, UPrimitiveComponent* comp) {
}

void ACoilGun::Server_HitTerrain_Implementation(const FVector_NetQuantize& Location, const FVector_NetQuantize& End, float maxCarveDepth) {
}

void ACoilGun::Server_FearTarget_Implementation(AActor* Target) {
}

void ACoilGun::Server_ClearAilments_Implementation() {
}

void ACoilGun::OnTriBurstCancled() {
}



void ACoilGun::OnShieldBoostEnded() {
}


void ACoilGun::OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial, bool wasDirectHit) {
}

void ACoilGun::OnDamageTarget(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysicalMaterial) {
}

void ACoilGun::OnCharacterShieldBroke(AActor* brokeChar) {
}

void ACoilGun::OnBulletPathComplete(const TArray<FBulletPathSegment>& Path) {
}

void ACoilGun::All_ShowHit_Implementation(const FVector_NetQuantize& Location, const FVector_NetQuantize& Rotation) {
}

void ACoilGun::All_ShieldBroken_Implementation() {
}

void ACoilGun::All_AdjustTrail_Implementation(ACoilgunWeaponTrail* Trail, float Length) {
}

ACoilGun::ACoilGun() {
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("NormalDamage"));
    this->OverchargeDamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("OverchargeDamage"));
    this->WeaponBlastDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("BlastDamage"));
    this->ShotwaveBonusDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("ShotwaveDamage"));
    this->MoleBonusDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("MoleDamage"));
    this->FullyChargedParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FullyChargedParticles"));
    this->FP_OverchargeIndicatorParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FP_OverchargeIndicatorParticles"));
    this->TP_FullyChargedParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TP_FullchargeParticles"));
    this->TrailSpawner = CreateDefaultSubobject<UCoilgunTrailSpawner>(TEXT("TrailSpawner"));
    this->ImpactMeshCarver = NULL;
    this->N_ImpactParticles = NULL;
    this->ChargeResistanceStatusEffect = NULL;
    this->ChargeWeaknessStatusEffect = NULL;
    this->CustomMuzzleFlash = NULL;
    this->MaxAfflictionTime = 20.00f;
    this->ShotWidth = 15.00f;
    this->BonusShotWidth = 0.00f;
    this->ImpactFearFactor = 0.00f;
    this->OverChargedShotMaxPower = 1.00f;
    this->MaxOverchargeTime = 4.00f;
    this->OverchargeTimeStep = 0.25f;
    this->BrokenShieldboostDuration = 30.00f;
    this->MinUndercharge = 1.00f;
    this->TriBustCancelTime = 1.00f;
    this->TriBurstShotPowerMultiplier = 0.75f;
    this->TriBurstAmmoMultiplier = 0.50f;
    this->TriBurstShotCarvingMultiplier = 0.00f;
    this->FirstDynamicIndex = 1;
    this->LastDynamicIndex = 5;
}

