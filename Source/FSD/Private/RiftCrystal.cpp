#include "RiftCrystal.h"
#include "Components/AudioComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "NiagaraComponent.h"
#include "DamageComponent.h"
#include "EnemyComponent.h"
#include "EnemyHealthComponent.h"
#include "MeshCarverComponent.h"
#include "Net/UnrealNetwork.h"
#include "PathfinderCollisionComponent.h"
#include "RiftSpawnerComponent.h"
#include "RotatingSceneComponent.h"
#include "SpawnActorWithDebrisPosComponent.h"

ARiftCrystal::ARiftCrystal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Root = (USceneComponent*)RootComponent;
    this->FlightRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FlightRootComponent"));
    this->Bobber = CreateDefaultSubobject<URotatingSceneComponent>(TEXT("BobbingComponent"));
    this->Rotator = CreateDefaultSubobject<URotatingSceneComponent>(TEXT("RotatorComponent"));
    this->CrystalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SKMeshComponent"));
    this->WeakpointCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("WeakpointCollisionComponent"));
    this->Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("LightComponent"));
    this->LargeLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("LargeLightComponent"));
    this->KnockBackCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("KnockbackTriggerComponent"));
    this->SpaceCarver = CreateDefaultSubobject<UMeshCarverComponent>(TEXT("SpaceCarverComponent"));
    this->TerrainDetectors.AddDefaulted(3);
    this->EnergyParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("EnergyParticleComponent"));
    this->PillarParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("PillarParticlesComponent"));
    this->RockIdleSound = CreateDefaultSubobject<UAudioComponent>(TEXT("RockIdleComponent"));
    this->CrystalIdleSound = CreateDefaultSubobject<UAudioComponent>(TEXT("CrystalIdleComponent"));
    this->InvulnerableParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RockShieldComponent"));
    this->EscortBlocker = CreateDefaultSubobject<UPathfinderCollisionComponent>(TEXT("EscortblockerComponent"));
    this->DebrisSpawner = CreateDefaultSubobject<USpawnActorWithDebrisPosComponent>(TEXT("DebrisSpawnerComponent"));
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("HealthComponent"));
    this->RiftSpawner = CreateDefaultSubobject<URiftSpawnerComponent>(TEXT("SpawnerComponent"));
    this->enemy = CreateDefaultSubobject<UEnemyComponent>(TEXT("EnemyComponent"));
    this->KnockBackDamge = CreateDefaultSubobject<UDamageComponent>(TEXT("KnockbackDamageComponent"));
    this->EndExplosionDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("EndExplosionDamageComponent"));
    this->BeamTargetParamName = TEXT("Beam_EndPosition");
    this->DeathRattle = NULL;
    this->DroppedActorClass = NULL;
    this->ExtractionPodClass = NULL;
    this->ExtractionPodPositioning = NULL;
    this->ExtractionPodCostCurve = NULL;
    this->InvulnerableOverride = NULL;
    this->WeakPointMaterial = NULL;
    this->InitialBreakFreeSound = NULL;
    this->BreakFreeSound = NULL;
    this->ActivatedWarningSound = NULL;
    this->BeamShootSound = NULL;
    this->BeamImpactSound = NULL;
    this->EmbeddedSound = NULL;
    this->PushBackSound = NULL;
    this->PushBackEffect = NULL;
    this->BeamEffect = NULL;
    this->BeamImpactEffect = NULL;
    this->DeathDisplayTime = 3.00f;
    this->SafetyDistance = 0.00f;
    this->TargetFlightHeight = 0.00f;
    this->KnockBackInterval = 0.66f;
    this->MaxFallSpeed = 0.00f;
    this->FallAcceleration = 0.00f;
    this->CheckPathsInterval = 5.00f;
    this->ReinforcementCooldown = 10.00f;
    this->BossHealthBarDelay = 3.00f;
    this->InitialCarvingDone = false;
    this->RotateBeamComponents = false;
    this->State = Default;
    this->FlightRoot->SetupAttachment(RootComponent);
    this->Bobber->SetupAttachment(FlightRoot);
    this->Rotator->SetupAttachment(Bobber);
    this->CrystalMesh->SetupAttachment(Rotator);
    this->WeakpointCollision->SetupAttachment(CrystalMesh);
    this->Light->SetupAttachment(CrystalMesh);
    this->LargeLight->SetupAttachment(CrystalMesh);
    this->KnockBackCapsule->SetupAttachment(RootComponent);
    this->SpaceCarver->SetupAttachment(RootComponent);
    this->EnergyParticles->SetupAttachment(CrystalMesh);
    this->PillarParticles->SetupAttachment(RootComponent);
    this->RockIdleSound->SetupAttachment(RootComponent);
    this->CrystalIdleSound->SetupAttachment(CrystalMesh);
    this->InvulnerableParticles->SetupAttachment(CrystalMesh);
    this->EscortBlocker->SetupAttachment(RootComponent);
}


void ARiftCrystal::StopRumble() {
}


void ARiftCrystal::StartRumble() {
}



void ARiftCrystal::ShowHeathBar() {
}

void ARiftCrystal::ShowCallingEffects() const {
}

void ARiftCrystal::SetState(TEnumAsByte<ERiftCrystalState> NewState) {
}




void ARiftCrystal::OnTerrainPointRemoved(USceneComponent* Point) {
}

void ARiftCrystal::OnRiftSpawned(AActor* Rift) {
}

void ARiftCrystal::OnRep_State(TEnumAsByte<ERiftCrystalState> oldState) {
}

void ARiftCrystal::OnNewHealthSegment(int32 currentSegment, int32 prevSegment) {
}

void ARiftCrystal::OnExitedKnockbackZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ARiftCrystal::OnEnteredKnockbackZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ARiftCrystal::OnDeath(UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& damageTags) {
}

void ARiftCrystal::OnDamaged(float Damage, const FDamageData& DamageData, bool anyHealthLost) {
}

void ARiftCrystal::OnAllRiftsOpened() {
}

void ARiftCrystal::EnableTerrainDetection() {
}

void ARiftCrystal::DisableTerrainDetection() {
}



void ARiftCrystal::All_ShowRiftSpawnEffects_Implementation(FVector_NetQuantize riftLocation) {
}

void ARiftCrystal::All_AddKnockBack_Implementation(FVector_NetQuantize Direction, float force) {
}

void ARiftCrystal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARiftCrystal, State);
}


