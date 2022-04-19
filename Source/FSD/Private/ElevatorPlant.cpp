#include "ElevatorPlant.h"
#include "Net/UnrealNetwork.h"

void AElevatorPlant::SetLeafNoiseRotator(const FRotator& aRotator) {
}

void AElevatorPlant::SetLeafLocationNoise(const FVector& aVector) {
}

void AElevatorPlant::SetIsOpen(bool aValue) {
}

void AElevatorPlant::SetIsExtended(bool aValue) {
}

void AElevatorPlant::SetBaseTangentLength(float Value) {
}

void AElevatorPlant::SetBaseTangentDirectionOffset(const FVector& aVector) {
}

void AElevatorPlant::OnRep_RelavtiveDestinationLocation() {
}

void AElevatorPlant::OnRep_Open() {
}

void AElevatorPlant::OnMatchStarted() {
}

void AElevatorPlant::MoreTick(const FVector& DipOffset, float aValue) {
}

float AElevatorPlant::GetVineMovementAlpha() const {
    return 0.0f;
}

FVector AElevatorPlant::GetRelativeRestLocation() const {
    return FVector{};
}

FVector AElevatorPlant::GetRelativeDestinationLocation() const {
    return FVector{};
}

float AElevatorPlant::GetLeafLocationNoiseSize() const {
    return 0.0f;
}

bool AElevatorPlant::GetIsMoving() const {
    return false;
}

bool AElevatorPlant::GetIsExtended() const {
    return false;
}

float AElevatorPlant::GetInitialTangentLenth() const {
    return 0.0f;
}

void AElevatorPlant::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElevatorPlant, RelativeRestLocation);
    DOREPLIFETIME(AElevatorPlant, RelativeDestinationLocation);
    DOREPLIFETIME(AElevatorPlant, LeafLocationNoise);
    DOREPLIFETIME(AElevatorPlant, LeafNoiseRotator);
    DOREPLIFETIME(AElevatorPlant, InitialBaseTangentLength);
    DOREPLIFETIME(AElevatorPlant, IsOpen);
    DOREPLIFETIME(AElevatorPlant, Extend);
}

AElevatorPlant::AElevatorPlant() {
    this->MovingSoundComponent = NULL;
    this->GrabSound = NULL;
    this->BaseTangentLength = 0.00f;
    this->CSplineMesh = NULL;
    this->CVineBase = NULL;
    this->CVineLeaf = NULL;
    this->InitialBaseTangentLength = 0.00f;
    this->LeafLocationNoiseSize = 0.00f;
    this->VineMovementAlpha = 0.50f;
    this->IsMoving = false;
    this->IsOpen = false;
    this->Extend = false;
    this->DipOffsetCurve = NULL;
    this->LocationLerpCurve = NULL;
}

