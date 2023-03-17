#include "TeamTransport.h"
#include "AutoCarverComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

ATeamTransport* ATeamTransport::SpawnPodAtLocation(UObject* WorldContextObject, TSubclassOf<ATeamTransport> podClass, const FTransform& Transform) {
    return NULL;
}

void ATeamTransport::SetRampState(EMiningPodRampState NewRampState) {
}




void ATeamTransport::PrepForTakeOff() {
}

void ATeamTransport::PowerUp() {
}

void ATeamTransport::PoweredUp() {
}

void ATeamTransport::OnRep_State() {
}










void ATeamTransport::OnCountdownFinished() {
}

void ATeamTransport::OnCountdownChanged(int32 newTime) {
}


int32 ATeamTransport::GetTimeToDeparture() const {
    return 0;
}

bool ATeamTransport::GetHasLanded() const {
    return false;
}


void ATeamTransport::ExitSpacerig() {
}

void ATeamTransport::DropToTarget(UObject* WorldContextObject, TSubclassOf<ATeamTransport> podClass, const FTransform& dropLocation, int32 DropDelay) {
}

ATeamTransport* ATeamTransport::DropToMission(UObject* WorldContextObject, TSubclassOf<ATeamTransport> podClass, const FVector& Location) {
    return NULL;
}

void ATeamTransport::DepositAllPlayersMaterials() {
}

void ATeamTransport::Depart() {
}

void ATeamTransport::CorrectLocationsForSpawnedOnLocation() {
}

FVector ATeamTransport::AdjustLandingLocationToGround(UObject* WorldContextObjet, const FVector& initialLocation, float maxDownAdjustment) {
    return FVector{};
}

void ATeamTransport::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATeamTransport, TargetLocation);
    DOREPLIFETIME(ATeamTransport, StartLocation);
    DOREPLIFETIME(ATeamTransport, TransportState);
    DOREPLIFETIME(ATeamTransport, rampState);
}

ATeamTransport::ATeamTransport() {
    this->DropHeight = 3500.00f;
    this->AutoCarver = CreateDefaultSubobject<UAutoCarverComponent>(TEXT("AutoCarver"));
    this->DropCurve = NULL;
    this->DepartCurve = NULL;
    this->CarverDropCurve = NULL;
    this->CarverRotationSpeed = 100.00f;
    this->DwarfCheckerBox = NULL;
    this->DepartureTime = -1.00f;
    this->MissionType = EMiningPodMission::DropAndReturn;
    this->WaitForPlayerSpawns = true;
    this->HasLanded = false;
    this->PodOutline = NULL;
    this->TransportState = EMiningPodState::WaitingForGameStart;
    this->rampState = EMiningPodRampState::Closed;
    this->TargetDropTime = 0.00f;
    this->TargetDepartureTime = 0.00f;
    this->TimeToDrop = 0.00f;
    this->ObjectivesManager = NULL;
}

