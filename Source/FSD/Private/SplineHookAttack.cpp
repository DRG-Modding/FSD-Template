#include "SplineHookAttack.h"
#include "Net/UnrealNetwork.h"

void USplineHookAttack::SetTailLight(UPointLightComponent* Light) {
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
    this->GrabLight = NULL;
    this->GrabbedIndicationSound = NULL;
    this->HeadAnimation = NULL;
    this->Damage = NULL;
    this->ForwardPlacement = 100.00f;
    this->DesiredLaunchAngle = 45.00f;
    this->AdjustmentStartDistance = 50.00f;
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

