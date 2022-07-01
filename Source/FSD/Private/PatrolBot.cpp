#include "PatrolBot.h"
#include "Net/UnrealNetwork.h"
#include "AvoidCeilingComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "HackingUsableComponent.h"
#include "Components/SphereComponent.h"
#include "EnemyComponent.h"
#include "DamageComponent.h"
#include "PawnAlertComponent.h"
#include "PlayerImpactCooldownComponent.h"
#include "Components/AudioComponent.h"
#include "ProjectileAttackComponent.h"

class AActor;
class UHealthComponentBase;
class UPrimitiveComponent;

void APatrolBot::SetIsPatrolling(bool patroling) {
}

void APatrolBot::SetHacked() {
}

void APatrolBot::SetFiringRockets(bool firing) {
}

void APatrolBot::ReviveDrone() {
}





void APatrolBot::OnRep_State() {
}

void APatrolBot::OnRep_IsLockedOn() {
}

void APatrolBot::OnRep_FiringRockets() {
}

void APatrolBot::OnRep_ControlState(EPatrolBotControlState oldState) {
}


void APatrolBot::OnMovementStateChanged(EDeepMovementState NewState) {
}






void APatrolBot::OnDroneAlerted() {
}


void APatrolBot::OnDeath(UHealthComponentBase* aHealthComponent) {
}


void APatrolBot::OnCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APatrolBot::Jumped_Implementation() {
}

bool APatrolBot::IsHacked() const {
    return false;
}

void APatrolBot::ImpactSound_Implementation() {
}

void APatrolBot::EndFireRockets() {
}

void APatrolBot::DisableDrone() {
}

void APatrolBot::All_SetLaserBeamActive_Implementation(bool Active) {
}

void APatrolBot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APatrolBot, IsLockedOn);
    DOREPLIFETIME(APatrolBot, State);
    DOREPLIFETIME(APatrolBot, ControlState);
    DOREPLIFETIME(APatrolBot, FiringRockets);
    DOREPLIFETIME(APatrolBot, Alerted);
    DOREPLIFETIME(APatrolBot, CurrentTarget);
}

APatrolBot::APatrolBot() {
    this->HackingUsable = CreateDefaultSubobject<UHackingUsableComponent>(TEXT("HackingUsable"));
    this->PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
    this->CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    this->NearTargetSphere = NULL;
    this->LaserBeam = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LaserBeamIndicator"));
    this->TearingGroundParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TearingGroundParticles"));
    this->EnemyComponent = CreateDefaultSubobject<UEnemyComponent>(TEXT("EnemyComponent"));
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->BumpDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("BumpDamage"));
    this->Alert = CreateDefaultSubobject<UPawnAlertComponent>(TEXT("Alert"));
    this->ImpactCooldown = CreateDefaultSubobject<UPlayerImpactCooldownComponent>(TEXT("ImpactCooldown"));
    this->CeilingAvoidance = CreateDefaultSubobject<UAvoidCeilingComponent>(TEXT("CeilingAvoidance"));
    this->RollingAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("RollingAudioComponent"));
    this->FlyingAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("FlyingAudioComponent"));
    this->RollingRangedAttack = CreateDefaultSubobject<UProjectileAttackComponent>(TEXT("RangedAttack"));
    this->FlyingRangedAttack = CreateDefaultSubobject<UProjectileAttackComponent>(TEXT("FlyingRangedAttack"));
    this->MissileAttack = CreateDefaultSubobject<UProjectileAttackComponent>(TEXT("MissileAttack"));
    this->MaxMotionSoundVelThresholdFlying = 400.00f;
    this->MaxMotionSoundVelThreshold = 400.00f;
    this->MaxTurningMotionSoundVelThreshold = 400.00f;
    this->DebugAudio = false;
    this->HackedAttackMultiplier = 0.50f;
    this->IsLockedOn = false;
    this->DelayAfterLockOn = 0.50f;
    this->ImpactCue = NULL;
    this->JumpSound = NULL;
    this->StartupAccelerationSound = NULL;
    this->LaunchPower = 0.00f;
    this->SpawnRocketsTime = 5.00f;
    this->State = EPatrolBotState::Rolling;
    this->ControlState = EPatrolBotControlState::Hostile;
    this->HackedAttackSpeedMultiplier = 0.80f;
    this->LaserPenetrationDistance = 10.00f;
    this->MinTurretAngle = -30.00f;
    this->MaxTurretAngle = 50.00f;
    this->SpawnRocketsChance = 0.50f;
    this->GunRange = 0.00f;
    this->RollingAttackCooldown = 0.00f;
    this->FlyingAttackCooldown = 0.00f;
    this->TurretLerpSpeed = 3.00f;
    this->AimDownwardsOffset = 40.00f;
    this->AccelerationThreshold = 0.00f;
    this->LowSpeedThreshold = 50.00f;
    this->RollSettings = NULL;
    this->JumpSettings = NULL;
    this->SpawnRocketsSettings = NULL;
    this->CanJump = false;
    this->JumpForce = 0.00f;
    this->StartFlyingTimer = 0.50f;
    this->MinRollingTime = 0.00f;
    this->MaxRollingTime = 0.00f;
    this->MinFlyingTime = 0.00f;
    this->MaxFlyingTime = 0.00f;
    this->SinSpeed = 0.50f;
    this->SinSize = 50.00f;
    this->FlyingDampOmega = 4.00f;
    this->RollingDampOmega = 20.00f;
    this->FiringRockets = false;
    this->Alerted = false;
    this->CurrentTarget = NULL;
}

