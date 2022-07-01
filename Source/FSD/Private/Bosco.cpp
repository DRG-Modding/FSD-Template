#include "Bosco.h"
#include "Net/UnrealNetwork.h"
#include "BoscoAbillityComponent.h"
#include "DamageComponent.h"
#include "UpgradableBoscoComponent.h"
#include "HealthComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "Components/SpotLightComponent.h"
#include "DroneMiningToolBase.h"
#include "BobbingComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "HitscanComponent.h"
#include "Components/PointLightComponent.h"
#include "DroneSkinnableComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"

class UTerrainMaterial;

void ABosco::UseABillity() {
}

void ABosco::StopShootingSound_Implementation() {
}


void ABosco::StartSelfDestruct() {
}

void ABosco::SetIsReviving(bool aIsReviving) {
}

void ABosco::SetIsRepairing(bool isRepairing) {
}


void ABosco::ReviveCounterChanged(int32 remainingCharges) {
}

void ABosco::Respond() {
}

void ABosco::PlaySalute_Implementation() {
}

void ABosco::OnWeaponFired(const FVector& Location) {
}

void ABosco::OnTargetBurrowChange(bool burrowed) {
}

void ABosco::OnRep_State(EDroneAIState prevState) {
}

void ABosco::OnReadyToShoot() {
}

void ABosco::OnNotReadyToShoot() {
}

void ABosco::OnHit(float Amount, float BaseAmount, const FDamageData& DamageData) {
}

void ABosco::OnGrabbedGem() {
}

void ABosco::MineEffects_Implementation(UTerrainMaterial* aTerrainMaterial, FVector_NetQuantize aLocation, FRotator aRotation) {
}

UUpgradableBoscoComponent* ABosco::GetUpgradeComponent() {
    return NULL;
}

int32 ABosco::GetReviveCharges() const {
    return 0;
}

UBoscoAbillityComponent* ABosco::GetPlayerAbillity() const {
    return NULL;
}

EDroneAIState ABosco::GetCurrentState() const {
    return EDroneAIState::Follow;
}

bool ABosco::GetCarryInterrupted() const {
    return false;
}

bool ABosco::DoPickupGemAnimation() {
    return false;
}

void ABosco::All_OnSelfDestruct_Implementation() {
}

void ABosco::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABosco, RotateTarget);
    DOREPLIFETIME(ABosco, LookAtLocation);
    DOREPLIFETIME(ABosco, IsFiring);
    DOREPLIFETIME(ABosco, IsInRangeToMine);
    DOREPLIFETIME(ABosco, IsPreparedToMine);
    DOREPLIFETIME(ABosco, IsMining);
    DOREPLIFETIME(ABosco, IsReviving);
    DOREPLIFETIME(ABosco, IsRotateMode);
    DOREPLIFETIME(ABosco, CurrentState);
}

ABosco::ABosco() {
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->AbillityComponent = CreateDefaultSubobject<UBoscoAbillityComponent>(TEXT("PlayerAbillity"));
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->Senses = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("Senses"));
    this->MiningTool = CreateDefaultSubobject<UDroneMiningToolBase>(TEXT("MiningTool"));
    this->BobbingComponent = CreateDefaultSubobject<UBobbingComponent>(TEXT("BobbingComponent"));
    this->BoscoMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BoscoMesh"));
    this->DroneHitScan = CreateDefaultSubobject<UHitscanComponent>(TEXT("BoscoHitscan"));
    this->SpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightComponent"));
    this->PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightComponent"));
    this->LTrail = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LTrail"));
    this->RTrail = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RTrail"));
    this->MomentumSound = CreateDefaultSubobject<UAudioComponent>(TEXT("MomentumAudio"));
    this->DefendDrilldozerShout = NULL;
    this->DefendGenericShout = NULL;
    this->MineOrderShout = NULL;
    this->KillOrderShout = NULL;
    this->GoToOrderShout = NULL;
    this->ReviveOrderShout = NULL;
    this->PickupGemShout = NULL;
    this->ReviveThankShout = NULL;
    this->GeneralCallShout = NULL;
    this->RocketAbillityShout = NULL;
    this->CryoGrenadeAbillityShout = NULL;
    this->MineResponse = NULL;
    this->CombatResponse = NULL;
    this->LightResponse = NULL;
    this->ReviveResponse = NULL;
    this->AbillityResponse = NULL;
    this->CurrentResponse = NULL;
    this->ResponseTime = 0.00f;
    this->SeeTargetTime = 0.50f;
    this->AbillityErrorSound = NULL;
    this->INcreasedMiningArea = 15.00f;
    this->TimeToResetMiningBoost = 3.00f;
    this->MiningBoosMultiplier = 7.00f;
    this->RocketAbillity = NULL;
    this->CryoGrenadeAbillity = NULL;
    this->ItemID = NULL;
    this->Upgradable = CreateDefaultSubobject<UUpgradableBoscoComponent>(TEXT("Upgradable"));
    this->SaluteAnimation = NULL;
    this->PickupGemAnimation = NULL;
    this->DropGemAnimation = NULL;
    this->SaluteDuration = 0.00f;
    this->Skinnable = CreateDefaultSubobject<UDroneSkinnableComponent>(TEXT("Skinnable"));
    this->TargetLightSetting = 0;
    this->RotateTarget = NULL;
    this->ShootSound = NULL;
    this->ShootSoundFadeout = 0.20f;
    this->ShootSoundTail = NULL;
    this->ShootSoundInstance = NULL;
    this->MuzzleEffect = NULL;
    this->TracerEffect = NULL;
    this->FireRate = 0.00f;
    this->MinShotsInBurst = 0;
    this->MaxShotsInBurst = 0;
    this->MaxRandomBurstCooldown = 0.00f;
    this->MinRandomBurstCooldown = 0.00f;
    this->MaxFiringAngle = 0.00f;
    this->MaxEngagementRange = 0.00f;
    this->MinTracerDistance = 100.00f;
    this->TracerSpeed = 10000.00f;
    this->ReviveSirens = NULL;
    this->DistanceToFacePlayer = 0.00f;
    this->RotationSpeed = 0.00f;
    this->PrepareToMineRange = 0.00f;
    this->MiningRange = 0.00f;
    this->MaxRevives = 0;
    this->IsFiring = false;
    this->IsInRangeToMine = false;
    this->IsPreparedToMine = false;
    this->IsMining = false;
    this->IsReviving = false;
    this->IsRotateMode = false;
    this->DroneController = NULL;
    this->CurrentState = EDroneAIState::Follow;
}

