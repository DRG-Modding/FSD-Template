#include "SplineHookAttack.h"
#include "Net/UnrealNetwork.h"

void USplineHookAttack::Server_DamageTarget_Implementation(AActor* Target) {
}

void USplineHookAttack::OnRep_Using() {
}

FVector USplineHookAttack::GetTargetLocation() const {
    return FVector{};
}

FVector USplineHookAttack::GetTargetDirection() const {
    return FVector{};
}

bool USplineHookAttack::GetHasAquiredTarget() const {
    return false;
}

void USplineHookAttack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USplineHookAttack, SyncedTarget);
    DOREPLIFETIME(USplineHookAttack, Using);
}

USplineHookAttack::USplineHookAttack() {
    this->Spline = NULL;
    this->HeadMesh = NULL;
    this->TailMesh = NULL;
    this->HitReacts = NULL;
    this->HeadAnimation = NULL;
    this->TailAnimation = NULL;
    this->Damage = NULL;
    this->KnockBackHorizontalForce = 0.00f;
    this->HorizontalScaleMultiplier = 0.00f;
    this->KnockBackVerticalForce = 0.00f;
    this->OptimalDistance = 0.00f;
    this->VerticalScaleMultiplier = 0.00f;
    this->MinHorizontalPower = 0.00f;
    this->MinVerticalPower = 0.00f;
    this->HeightDiffPower = 1.00f;
    this->AbsoluteKnockBack = false;
    this->ScaleByHeightDiff = true;
    this->AttackDuration = 1.00f;
    this->MaxAngle = 60.00f;
    this->AttackOnProgress = 0.50f;
    this->AttackDelay = 0.30f;
    this->LeadMultiplier = 1.00f;
    this->AquireLocationTime = 0.00f;
    this->ShowGrabArea = false;
    this->Lead = false;
    this->Using = false;
}

