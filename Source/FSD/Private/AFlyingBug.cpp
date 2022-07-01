#include "AFlyingBug.h"
#include "Net/UnrealNetwork.h"
#include "EnemyComponent.h"
#include "Components/AudioComponent.h"
#include "PawnStatsComponent.h"
#include "FrozenPawnImpactComponent.h"
#include "OutlineComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "PawnAlertComponent.h"
#include "Components/SphereComponent.h"
#include "HitReactionComponent.h"

class AActor;
class UHealthComponentBase;
class UHealthComponent;
class UDamageTag;


void AAFlyingBug::SetRotateTarget(AActor* aTarget) {
}

void AAFlyingBug::SetExternallyControlled(bool isExternallyControlled) {
}

void AAFlyingBug::SetAttackStance(bool isAttackStance) {
}

void AAFlyingBug::PlayVoice() {
}

void AAFlyingBug::OnStartFalling() {
}

void AAFlyingBug::OnRep_AttackStance() {
}


void AAFlyingBug::OnFreezeImpact() {
}

void AAFlyingBug::OnBugDeath(UHealthComponentBase* Health) {
}

float AAFlyingBug::GetMidZpointFromCielingAndFloor(float& distanceFromCieling, float& distanceFromFloor) const {
    return 0.0f;
}

bool AAFlyingBug::GetIsInAttackStance() const {
    return false;
}

void AAFlyingBug::All_Ragdoll_Implementation(const FVector_NetQuantize& Location, const FVector_NetQuantize& Impulse, uint8 BoneIndex) {
}


void AAFlyingBug::AddImpulseAndRagdoll(UHealthComponent* Health, float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& damageTags) {
}

void AAFlyingBug::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAFlyingBug, RotateTarget);
    DOREPLIFETIME(AAFlyingBug, AttackStance);
}

AAFlyingBug::AAFlyingBug() {
    this->EnemyComponent = CreateDefaultSubobject<UEnemyComponent>(TEXT("enemy"));
    this->PawnStats = CreateDefaultSubobject<UPawnStatsComponent>(TEXT("PawnStats"));
    this->outline = CreateDefaultSubobject<UOutlineComponent>(TEXT("outline"));
    this->Senses = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("Sensing"));
    this->Alert = CreateDefaultSubobject<UPawnAlertComponent>(TEXT("Alert"));
    this->ExplosionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("ExplosionSphere"));
    this->WingSoundComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("WingSound"));
    this->FrozenImpact = CreateDefaultSubobject<UFrozenPawnImpactComponent>(TEXT("FrozenImpact"));
    this->HitReactions = CreateDefaultSubobject<UHitReactionComponent>(TEXT("HitReactions"));
    this->RotateTarget = NULL;
    this->ChatterSound = NULL;
    this->DistanceForAttackMode = 0.00f;
    this->MinChatterDelay = 0.00f;
    this->MaxChatterDelay = 0.00f;
    this->AttackModeRotationSpeed = 0.00f;
    this->UsesAttackStance = true;
    this->SetLifeTime = true;
    this->AttackStance = false;
    this->LookStraight = false;
    this->UseDefaultRagdoll = true;
}

