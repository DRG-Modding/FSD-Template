#include "AFlyingBug.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UHealthComponentBase;


void AAFlyingBug::SetRotateTarget(AActor* aTarget) {
}

void AAFlyingBug::SetExternallyControlled(bool isExternallyControlled) {
}

void AAFlyingBug::SetAttackStance(bool isAttackStance) {
}

void AAFlyingBug::Ragdoll(bool applyForce, const FVector& force) {
}

void AAFlyingBug::PlayVoice() {
}

void AAFlyingBug::OnStartFalling() {
}

void AAFlyingBug::OnRep_RagdollImpact() {
}

void AAFlyingBug::OnRep_AttackStance() {
}


void AAFlyingBug::OnFreezeImpact() {
}

void AAFlyingBug::OnDamaged(float Amount) {
}

void AAFlyingBug::OnBugDeath(UHealthComponentBase* Health) {
}

float AAFlyingBug::GetMidZpointFromCielingAndFloor(float& distanceFromCieling, float& distanceFromFloor) const {
    return 0.0f;
}

bool AAFlyingBug::GetIsInAttackStance() const {
    return false;
}


void AAFlyingBug::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAFlyingBug, RagdollImpact);
    DOREPLIFETIME(AAFlyingBug, RotateTarget);
    DOREPLIFETIME(AAFlyingBug, AttackStance);
}

AAFlyingBug::AAFlyingBug() {
    this->RotateTarget = NULL;
    this->PhysicalAssetAfterDeath = NULL;
    this->ChatterSound = NULL;
    this->FirstHitReactBlendIn = 0.10f;
    this->OverrideHitReactBlendIn = 0.05f;
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

