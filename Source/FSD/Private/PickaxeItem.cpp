#include "PickaxeItem.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "DamageComponent.h"

class UPrimitiveComponent;
class USoundCue;
class UFSDPhysicalMaterial;
class UParticleSystem;


void APickaxeItem::SetSpecialCoolDownDuration(float newCooldownDuration) {
}

void APickaxeItem::Server_TriggerBezerk_Implementation() {
}

void APickaxeItem::Server_SetState_Implementation(EPickaxeState NewState) {
}

void APickaxeItem::Server_RemoveDebrisInstance_Implementation(FVector_NetQuantize HitPos, int32 DebrisIndex, int32 remappedIndex) {
}

void APickaxeItem::Server_HitBlock_Implementation(FVector_NetQuantize Position, int32 Material, bool removeDebris, bool isSpecial) {
}

void APickaxeItem::Server_DoPowerAttack_Implementation() {
}

void APickaxeItem::Server_DigBlock2_Implementation(FVector carvePos, FVector carveDirection, int32 TerrainMaterial, bool isSpecial) {
}

void APickaxeItem::Server_DamageTarget_Implementation(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
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
    this->FP_Root = CreateDefaultSubobject<USceneComponent>(TEXT("FP_Root"));
    this->TP_Root = CreateDefaultSubobject<USceneComponent>(TEXT("TP_Root"));
    this->FP_Scale = CreateDefaultSubobject<USceneComponent>(TEXT("FP_Scale"));
    this->TP_Scale = CreateDefaultSubobject<USceneComponent>(TEXT("TP_Scale"));
    this->FPAnimInstance = NULL;
    this->TPAnimInstance = NULL;
    this->FP_EquipAnimation = NULL;
    this->TP_EquipAnimation = NULL;
    this->EquipDuration = 0.25f;
    this->CharacterAnimationSet = NULL;
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->SpecialDamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("SpecialDamage"));
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
    this->PowerAttackRefreshedSound = NULL;
    this->PreventQMining = true;
    this->QMiningExpectedDelay = 0.67f;
    this->QMiningInitialDelay = 0.45f;
    this->QMiningReducedPlayRatePct = 1.00f;
    this->QMiningLastHitTime = 0.00f;
    this->CanBezerk = false;
    this->BezerkStatusEffect = NULL;
    this->PowerAttackEnabled = true;
    this->EquippedMaterial = NULL;
}

