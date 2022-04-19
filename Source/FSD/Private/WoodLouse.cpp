#include "WoodLouse.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "Perception/PawnSensingComponent.h"

class APawn;


void AWoodLouse::StopSpecial() {
}

void AWoodLouse::StartSpecial() {
}

void AWoodLouse::SetWantsToStandUp(bool aWantsToStandUp) {
}

void AWoodLouse::SetState(EWoodLouseState aState) {
}

void AWoodLouse::SetRotateToTarget(bool aRotateToTarget) {
}

void AWoodLouse::SeePawn(APawn* aSenPawn) {
}

void AWoodLouse::OnRep_State() {
}

void AWoodLouse::OnRep_LastHit() {
}

EWoodLouseState AWoodLouse::GetRollerState() const {
    return EWoodLouseState::Unfolded;
}


void AWoodLouse::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWoodLouse, LastHit);
    DOREPLIFETIME(AWoodLouse, CurrentState);
    DOREPLIFETIME(AWoodLouse, CurrentTarget);
    DOREPLIFETIME(AWoodLouse, RotateTowardsTarget);
    DOREPLIFETIME(AWoodLouse, WantsToStandUp);
    DOREPLIFETIME(AWoodLouse, IsShooting);
}

AWoodLouse::AWoodLouse() {
    this->RollingCenter = CreateDefaultSubobject<USceneComponent>(TEXT("RollingCenter"));
    this->PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("Sensing"));
    this->forceState = EWoodLouseState::Size;
    this->RollingCenterOffsetOnStanding = 60.00f;
    this->RollingCenterOffsetOnFold = 80.00f;
    this->ChanceToWalk = 0.60f;
    this->DebugAngle = false;
    this->FakeMoverSettings = NULL;
    this->BurstProjectileClass = NULL;
    this->BurstTime = 0.25f;
    this->TiltModifier = 1.00f;
    this->BurstXOffset = 0.00f;
    this->BurstYOffset = 0.00f;
    this->BurstZOffset = 0.00f;
    this->HighDifficultyCustomProjectileGravity = 1.00f;
    this->BurstCount = 3;
    this->InvounerableOnRoll = true;
    this->LockToRollMode = false;
    this->LockToWalkMode = false;
    this->ForgetRange = 300.00f;
    this->ForgetTime = 0.70f;
    this->RefreshTimeMax = 0.00f;
    this->RefreshTimeMin = 0.00f;
    this->BumpPower = 0.00f;
    this->DirectionalBumpPower = 0.00f;
    this->CurrentState = EWoodLouseState::Folded;
    this->CurrentTarget = NULL;
    this->FoldedStateMaxTime = 0.00f;
    this->FoldedStateMinTime = 0.00f;
    this->UnfoldedStateMaxTime = 0.00f;
    this->UnflodedStateMinTime = 0.00f;
    this->BumpSound = NULL;
    this->TimeBetweenBumpingSamePlayer = 0.00f;
    this->MinBumpDamage = 10.00f;
    this->MaxBumpDamage = 25.00f;
    this->BumpDamage = 0.00f;
    this->BumpDamageType = NULL;
    this->MaxBumpPower = 0.00f;
    this->BumpRange = 0.00f;
    this->AcceptableAngles = 30.00f;
    this->RollSpeedModifier = 1.15f;
    this->RollAlpha = 1.00f;
    this->TiltAlpha = 1.00f;
    this->RollingSound = NULL;
    this->RollMoveSettings = NULL;
    this->StopRollMoveSettings = NULL;
    this->RotateTowardsTarget = false;
    this->SeeTargetSafetyTime = 20.00f;
    this->WantsToStandUp = false;
    this->IsShooting = false;
    this->CanStandOnAnySurface = false;
}

