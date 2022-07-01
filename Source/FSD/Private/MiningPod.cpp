#include "MiningPod.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "AutoCarverComponent.h"

class AMiningPod;
class UObject;

AMiningPod* AMiningPod::SpawnPodAtLocation(UObject* WorldContextObject, TSubclassOf<AMiningPod> podClass, const FTransform& Transform) {
    return NULL;
}

void AMiningPod::SetRampState(EMiningPodRampState NewRampState) {
}




void AMiningPod::PrepForTakeOff() {
}

void AMiningPod::PowerUp() {
}

void AMiningPod::PoweredUp() {
}

void AMiningPod::OnRep_State() {
}










void AMiningPod::OnCountdownFinished() {
}

void AMiningPod::OnCountdownChanged(int32 newTime) {
}


int32 AMiningPod::GetTimeToDeparture() const {
    return 0;
}

bool AMiningPod::GetHasLanded() const {
    return false;
}



void AMiningPod::ExitSpacerig() {
}

void AMiningPod::DropToTarget(UObject* WorldContextObject, TSubclassOf<AMiningPod> podClass, const FTransform& dropLocation, int32 DropDelay) {
}

AMiningPod* AMiningPod::DropToMission(UObject* WorldContextObject, TSubclassOf<AMiningPod> podClass, const FVector& Location) {
    return NULL;
}

void AMiningPod::DepositAllPlayersMaterials() {
}

void AMiningPod::Depart() {
}

void AMiningPod::CorrectLocationsForSpawnedOnLocation() {
}

FVector AMiningPod::AdjustLandingLocationToGround(UObject* WorldContextObjet, const FVector& initialLocation, float maxDownAdjustment) {
    return FVector{};
}

void AMiningPod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMiningPod, TargetLocation);
    DOREPLIFETIME(AMiningPod, StartLocation);
    DOREPLIFETIME(AMiningPod, State);
    DOREPLIFETIME(AMiningPod, rampState);
}

AMiningPod::AMiningPod() {
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
    this->State = EMiningPodState::WaitingForGameStart;
    this->rampState = EMiningPodRampState::Closed;
    this->TargetDropTime = 0.00f;
    this->TargetDepartureTime = 0.00f;
    this->TimeToDrop = 0.00f;
    this->ObjectivesManager = NULL;
}

