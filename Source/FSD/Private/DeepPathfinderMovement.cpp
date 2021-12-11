#include "DeepPathfinderMovement.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UFakeMoverSettings;

void UDeepPathfinderMovement::UpdateTargetActor(AActor* NewTarget) {
}

void UDeepPathfinderMovement::UpdateDestination(const FVector& Dest) {
}

void UDeepPathfinderMovement::UnPauseMovement() {
}

void UDeepPathfinderMovement::TeleportTo(const FVector& destLoc, const FRotator& destRot) {
}

void UDeepPathfinderMovement::StopMove() {
}

void UDeepPathfinderMovement::StopAttackStance() {
}

bool UDeepPathfinderMovement::StartMoveToActor(AActor* Dest, float NewAcceptanceRadius) {
    return false;
}

bool UDeepPathfinderMovement::StartMoveTo(const FVector& Dest, float NewAcceptanceRadius) {
    return false;
}

bool UDeepPathfinderMovement::StartFleeFrom(const FVector& dangerPos, float Distance) {
    return false;
}

void UDeepPathfinderMovement::StartFakePhysicsMoveSet(UFakeMoverSettings* NewMoveSettings) {
}

void UDeepPathfinderMovement::StartFakePhysics(const FVector& Vel) {
}

void UDeepPathfinderMovement::StartAttackStance(const FVector& stancePos) {
}

void UDeepPathfinderMovement::SnapToPathfinder() {
}

void UDeepPathfinderMovement::SetSlowDownAngles(const float Min, const float Max) {
}

void UDeepPathfinderMovement::SetMaxSpeed(const float Speed) {
}

void UDeepPathfinderMovement::SetHandleRotation(const bool flag) {
}

void UDeepPathfinderMovement::SetFreezeAlignment(bool Freeze) {
}

void UDeepPathfinderMovement::SetControlledExternally(bool controlled) {
}

void UDeepPathfinderMovement::PauseMovement(float Time) {
}

bool UDeepPathfinderMovement::PathExistTo(const FVector& Dest) {
    return false;
}

bool UDeepPathfinderMovement::PathExistsBetween(const FVector& From, const FVector& to) {
    return false;
}

void UDeepPathfinderMovement::OnRep_PathMovedDist(uint32 lastPathMovedDist) {
}

void UDeepPathfinderMovement::OnRep_Path(const FDeepRepPath& oldPath) {
}

void UDeepPathfinderMovement::OnRep_MoveSettings(const UFakeMoverSettings* NewMoveSettings) {
}

bool UDeepPathfinderMovement::IsFreezeAlignmentSet() const {
    return false;
}

float UDeepPathfinderMovement::GetVerticalAngleSpeed() {
    return 0.0f;
}

void UDeepPathfinderMovement::GetRandomSpawnPointAtApproximateDistance_Async(const FVector& Origin, float Distance, bool& success, FVector& outPos, FLatentActionInfo LatentInfo) {
}

void UDeepPathfinderMovement::GetRandomReachablePointAtApproximateDistance_Async(const FVector& Origin, float Distance, bool& success, FVector& outPos, FLatentActionInfo LatentInfo) {
}

bool UDeepPathfinderMovement::GetRandomReachablePointAtApproximateDistance(const FVector& Origin, float Distance, FVector& outPos) {
    return false;
}

FVector UDeepPathfinderMovement::GetPathForwardDirection() {
    return FVector{};
}

DeepPathFinderType UDeepPathfinderMovement::GetPathfinderType() const {
    return DeepPathFinderType::Walk;
}

DeepPathFinderSize UDeepPathfinderMovement::GetPathfinderSize() const {
    return DeepPathFinderSize::Invalid;
}

EDeepMovementState UDeepPathfinderMovement::GetMovementState() const {
    return EDeepMovementState::Stationary;
}

bool UDeepPathfinderMovement::GetIsStrafing() {
    return false;
}

float UDeepPathfinderMovement::GetHorizontalAngleSpeed() {
    return 0.0f;
}

UFakeMoverSettings* UDeepPathfinderMovement::GetCurrentFakePhysicsMoveSet() {
    return NULL;
}

bool UDeepPathfinderMovement::FlyToConnectedPosition(const FVector& destPos) {
    return false;
}

bool UDeepPathfinderMovement::FindPointKeepingDistance(const FVector& Origin, float MinDistance, float MaxDistance, const FVector& Target, float idealTargetDistance, FVector& outPos) {
    return false;
}

FVector UDeepPathfinderMovement::FindPathfinderPointBelow(const FVector& Pos, float HeightOffset) {
    return FVector{};
}

FVector UDeepPathfinderMovement::FindPathfinderPointAbove(const FVector& Pos, float HeightOffset) {
    return FVector{};
}

FVector UDeepPathfinderMovement::FindPathfinderOffsetPoint(const FVector& Pos, const EOffsetFrom offsetFrom, float HeightOffset) {
    return FVector{};
}

FVector UDeepPathfinderMovement::FindNearestPathfinderPointOverrideType(const FVector& Pos, DeepPathFinderType overrideType, float MaxDistance) {
    return FVector{};
}

void UDeepPathfinderMovement::FindNearestPathfinderPoint_Async(const FVector& Pos, float MaxDistance, bool& success, FVector& outPos, FLatentActionInfo LatentInfo) {
}

FVector UDeepPathfinderMovement::FindNearestPathfinderPoint(const FVector& Pos, float MaxDistance) const {
    return FVector{};
}

FVector UDeepPathfinderMovement::FindNearestConnectedPathfinderPoint(const FVector& Pos, float MaxDistance) {
    return FVector{};
}

FQuat UDeepPathfinderMovement::CalcPathfinderOrientation(const FVector& Pos, const FVector& forwardDir) {
    return FQuat{};
}

bool UDeepPathfinderMovement::BackOffFrom(const FVector& dangerPos, float Distance) {
    return false;
}

void UDeepPathfinderMovement::AddFakeMoverImpulse(const FVector& Impulse) {
}

void UDeepPathfinderMovement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDeepPathfinderMovement, PathMovedDist);
    DOREPLIFETIME(UDeepPathfinderMovement, Path);
    DOREPLIFETIME(UDeepPathfinderMovement, MoveSettings);
    DOREPLIFETIME(UDeepPathfinderMovement, TargetActor);
    DOREPLIFETIME(UDeepPathfinderMovement, MoveMode);
}

UDeepPathfinderMovement::UDeepPathfinderMovement() {
    this->UseDormancy = false;
    this->MaxPawnSpeed = 300.00f;
    this->StrafeSpeed = 150.00f;
    this->MinSlowdownAngle = 20.00f;
    this->MaxSlowdownAngle = 90.00f;
    this->MaxStrafeDistance = 200.00f;
    this->AlignDirectionSpeed = 4.00f;
    this->FleeSpeedBoostMultiplier = 1.50f;
    this->MaxAcceleration = 500.00f;
    this->MaxBrakingDeceleration = 200.00f;
    this->AngleSpeedFilterFactor = 2.00f;
    this->AIAvoidanceWeight = 10;
    this->PathfinderType = DeepPathFinderType::Walk;
    this->PathfinderSize = DeepPathFinderSize::Medium;
    this->MovementPhysicsType = ETeleportType::TeleportPhysics;
    this->PathfinderPreference = DeepPathFinderPreference::None;
    this->AlignTowardsTargetIfStationary = false;
    this->AlignToTargetMinRequiredAngle = 0.00f;
    this->AllowSlowTickRateWhenNotVisible = true;
    this->ForceAPathIfNoneFound = false;
    this->DrawServerPath = false;
    this->CSGWorld = NULL;
    this->PathMovedDist = 0;
    this->LocalPathMovedDist = 0;
    this->MoveSettings = NULL;
    this->TargetActor = NULL;
    this->CurrentPathIndex = 0;
    this->CurrentPathFraction = 0.00f;
    this->DestinationActor = NULL;
    this->AcceptanceRadius = 0.00f;
    this->OnlyPartPath = false;
    this->PauseMovementTime = 0.00f;
    this->MoveMode = EDeepMovementMode::Normal;
    this->PawnStats = NULL;
    this->VerticalAngleSpeed = 0.00f;
    this->HorizontalAngleSpeed = 0.00f;
    this->IsStrafing = false;
    this->HasOustandingPathRequest = false;
    this->LastPathReachedPreciseDestination = true;
    this->PostponedTickTime = 0.00f;
    this->LastMoveSuccessful = false;
    this->HandleRotation = true;
    this->TickAfterOwnerDeath = false;
    this->DampOmega = 2.00f;
    this->UseMovementSpring = false;
    this->SnapToPathfinderOnFirstMove = true;
    this->FakeSyncTime = 0.00f;
}

