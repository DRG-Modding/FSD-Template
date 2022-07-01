#include "SharkEnemy.h"
#include "Net/UnrealNetwork.h"
#include "Perception/PawnSensingComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "FakePhysGrabberComponent.h"
#include "Components/SphereComponent.h"
#include "InDangerComponent.h"
#include "EnemyComponent.h"
#include "DamageComponent.h"

class AActor;
class UPrimitiveComponent;
class APawn;
class UHealthComponentBase;

void ASharkEnemy::SetVulnerable() {
}

void ASharkEnemy::ReleasePlayer(AActor* playerchar, bool fullGrabElapsed) {
}

void ASharkEnemy::PopRecentlyBumpedPlayer() {
}


void ASharkEnemy::OnSeePawn(APawn* APawn) {
}

void ASharkEnemy::OnRep_State(ESharkEnemyState oldState) {
}

void ASharkEnemy::OnRep_RagdollImpact() {
}

void ASharkEnemy::OnRep_DiveTime() {
}

void ASharkEnemy::OnNearTarget(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}






void ASharkEnemy::OnDeath(UHealthComponentBase* aHealthComponent) {
}

void ASharkEnemy::OnDamaged(float aAmount) {
}

void ASharkEnemy::OnCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASharkEnemy::Jumped_Implementation() {
}

void ASharkEnemy::ImpactSound_Implementation() {
}

void ASharkEnemy::DiveShow() {
}

void ASharkEnemy::DiveHide() {
}

void ASharkEnemy::ActivateDanger() {
}

void ASharkEnemy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASharkEnemy, DiveForSeconds);
    DOREPLIFETIME(ASharkEnemy, RagdollImpact);
    DOREPLIFETIME(ASharkEnemy, State);
}

ASharkEnemy::ASharkEnemy() {
    this->PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
    this->CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    this->NearTargetSphere = CreateDefaultSubobject<USphereComponent>(TEXT("NearTargetSphere"));
    this->TearingGroundParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TearingGroundParticles"));
    this->AirTrailParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AirTrailParticles"));
    this->Danger = CreateDefaultSubobject<UInDangerComponent>(TEXT("Danger"));
    this->EnemyComponent = CreateDefaultSubobject<UEnemyComponent>(TEXT("EnemyComponent"));
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->BumpDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("BumpDamage"));
    this->RestrictedGrabberComponent = CreateDefaultSubobject<UFakePhysGrabberComponent>(TEXT("RestrictedGrabberComponent"));
    this->RagdollSpeedFactor = 0.20f;
    this->ImpactCue = NULL;
    this->JumpSound = NULL;
    this->DiveForSeconds = 0.00f;
    this->LaunchPower = 0.00f;
    this->GrabTime = 3.00f;
    this->StopSpeedThreshold = 10.00f;
    this->UpsideDownTime = 0.00f;
    this->RaiseSpeed = 0.00f;
    this->TiltInSpeed = 1.00f;
    this->TiltOutSpeed = 1.00f;
    this->SafeTimeAfterVounerable = 0.00f;
    this->RaiseHeight = 60.00f;
    this->AttackDuration = 0.00f;
    this->HitLaunchPower = 0.50f;
    this->ChanceToGrab = 0.50f;
    this->MinTimeBetweenBumps = 1.00f;
    this->ChanceForJump = 0.30f;
    this->MinJumpCooldown = 0.00f;
    this->MaxJumpCooldown = 0.00f;
    this->JumpForce = 0.00f;
    this->TimeBeforeGroundCheck = 0.00f;
    this->MinCirclingTime = 0.00f;
    this->MaxCirclingTime = 0.00f;
    this->CircleSetttings = NULL;
    this->AttackSettings = NULL;
    this->PostHitSettings = NULL;
    this->JumpSettings = NULL;
    this->VounerableSettings = NULL;
    this->MaxInGroundTime = 0.00f;
    this->MinInGroundTime = 0.00f;
    this->StartParticleTime = 0.00f;
    this->EndParticleTime = 0.00f;
    this->DiveParticles = NULL;
    this->State = ESharkEnemyState::Idle;
}

