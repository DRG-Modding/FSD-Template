#include "DashPoints.h"
#include "Net/UnrealNetwork.h"

class UHealthComponentBase;
class AActor;

void UDashPoints::UpdateDashPointData() {
}

void UDashPoints::StopDashing() {
}

void UDashPoints::StartDashing() {
}

void UDashPoints::OnRep_Dashing() {
}

void UDashPoints::OnParentDeath(UHealthComponentBase* Health) {
}

FVector UDashPoints::GetDashPoint(AActor* fromTarget, bool& success) {
    return FVector{};
}

void UDashPoints::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDashPoints, DashLocation);
    DOREPLIFETIME(UDashPoints, IsDashing);
}

UDashPoints::UDashPoints() {
    this->PointOffset = 150.00f;
    this->MaxRangeFromPlayer = 400.00f;
    this->MinRangeFromPlayer = 200.00f;
    this->MinHeightAboveTarget = 50.00f;
    this->MaxHeightAboveTarget = 500.00f;
    this->safeReduction = 60.00f;
    this->AcceptedDashradius = 25.00f;
    this->DashSpeed = 100.00f;
    this->SlowdownRadius = 40.00f;
    this->IgnoreTheClosestPoints = 0;
    this->GenerationMode = EDashPointsGenerationMode::Surround;
    this->IsDashing = false;
    this->IgnoreRules = false;
}

