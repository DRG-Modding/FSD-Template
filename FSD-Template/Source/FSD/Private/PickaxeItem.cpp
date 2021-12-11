#include "PickaxeItem.h"
#include "Net/UnrealNetwork.h"

class UFSDPhysicalMaterial;
class UParticleSystem;
class USoundCue;
class UPrimitiveComponent;


void APickaxeItem::SetSpecialCoolDownDuration(float newCooldownDuration) {
}

void APickaxeItem::Server_TriggerBezerk_Implementation() {
}
bool APickaxeItem::Server_TriggerBezerk_Validate() {
    return true;
}

void APickaxeItem::Server_SetState_Implementation(EPickaxeState NewState) {
}
bool APickaxeItem::Server_SetState_Validate(EPickaxeState NewState) {
    return true;
}

void APickaxeItem::Server_RemoveDebrisInstance_Implementation(FVector_NetQuantize HitPos, int32 DebrisIndex, int32 remappedIndex) {
}
bool APickaxeItem::Server_RemoveDebrisInstance_Validate(FVector_NetQuantize HitPos, int32 DebrisIndex, int32 remappedIndex) {
    return true;
}

void APickaxeItem::Server_HitBlock_Implementation(FVector_NetQuantize Position, int32 Material, bool removeDebris, bool isSpecial) {
}
bool APickaxeItem::Server_HitBlock_Validate(FVector_NetQuantize Position, int32 Material, bool removeDebris, bool isSpecial) {
    return true;
}

void APickaxeItem::Server_DoPowerAttack_Implementation() {
}
bool APickaxeItem::Server_DoPowerAttack_Validate() {
    return true;
}

void APickaxeItem::Server_DigBlock2_Implementation(FVector carvePos, FVector carveDirection, int32 TerrainMaterial, bool isSpecial) {
}
bool APickaxeItem::Server_DigBlock2_Validate(FVector carvePos, FVector carveDirection, int32 TerrainMaterial, bool isSpecial) {
    return true;
}

void APickaxeItem::Server_DamageTarget_Implementation(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
}
bool APickaxeItem::Server_DamageTarget_Validate(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
    return true;
}

void APickaxeItem::RefreshSpecialCooldown() {
}

void APickaxeItem::OnRep_State(EPickaxeState oldState) {
}

void APickaxeItem::OnLoadoutChanged() {
}

float APickaxeItem::GetSpecialCooldownProgress() const {
    return 0.0f;
}

void APickaxeItem::All_SimulateHitBlock_Implementation(FVector_NetQuantize Position, int32 materia, bool removeDebris, bool isSpecial) {
}

void APickaxeItem::All_SimulateDigDebris_Implementation(FVector_NetQuantize Position, UParticleSystem* Particles, USoundCue* cue) {
}

void APickaxeItem::All_SimulateDigBlock_Implementation(FVector_NetQuantize Position, bool spawnParticles, int32 Material, float Density, bool isSpecial) {
}

void APickaxeItem::All_SimulateDamageTarget_Implementation(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
}

void APickaxeItem::All_DoPowerAttack_Implementation() {
}

void APickaxeItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APickaxeItem, State);
}

APickaxeItem::APickaxeItem() {
    this->QuadDamageCarving = false;
    this->FPAnimInstance = NULL;
    this->TPAnimInstance = NULL;
    this->FP_EquipAnimation = NULL;
    this->TP_EquipAnimation = NULL;
    this->EquipDuration = 0.25f;
    this->CharacterAnimationSet = NULL;
    this->SpecialCooldown = 30.00f;
    this->SpecialCooldownRemaining = 0.00f;
    this->RockMiningBonus = 0;
    this->DirtMiningBonus = 0;
    this->DamageRange = 200.00f;
    this->DamageRadius = 50.00f;
    this->OnDamageEnemySlowdownEffect = NULL;
    this->MiningSound = NULL;
    this->MineRumble = NULL;
    this->PartialMineRumble = NULL;
    this->DamageRumble = NULL;
    this->GeneralImpactAudioVolume = 1.00f;
    this->HitCooldown = 1.00f;
    this->MiningDuration = 1.00f;
    this->DistanceConsideredSameHit = 50.00f;
    this->BlockParticlesScaleFP = 1.00f;
    this->BlockParticlesScaleTP = 1.00f;
    this->State = EPickaxeState::Equipping;
    this->ActiveMiningEnabled = true;
    this->MaxActiveMiningCount = 3;
    this->ActiveMiningSpeedBoost = 0.15f;
    this->PreventQMining = true;
    this->QMiningExpectedDelay = 0.67f;
    this->QMiningInitialDelay = 0.45f;
    this->QMiningReducedPlayRatePct = 1.00f;
    this->QMiningLastHitTime = 0.00f;
    this->ActiveMiningSucceedSound = NULL;
    this->ActiveMiningFailedSound = NULL;
    this->CanBezerk = false;
    this->BezerkStatusEffect = NULL;
    this->PowerAttackEnabled = true;
    this->EquippedMaterial = NULL;
}

