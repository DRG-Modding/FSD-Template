#include "DropPod.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "AutoCarverComponent.h"

class UObject;
class ADropPod;

void ADropPod::StartDrilling() {
}

void ADropPod::PrepForTakeOff() {
}

void ADropPod::OnRep_State() {
}





ADropPod* ADropPod::DropToMission(UObject* WorldContextObject, TSubclassOf<ADropPod> podClass, const FVector& Location) {
    return NULL;
}

void ADropPod::Depart() {
}

void ADropPod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADropPod, TargetLocation);
    DOREPLIFETIME(ADropPod, State);
}

ADropPod::ADropPod() {
    this->DropHeight = 3500.00f;
    this->AutoCarver = CreateDefaultSubobject<UAutoCarverComponent>(TEXT("AutoCarver"));
    this->DepartCurve = NULL;
    this->CarverRotationSpeed = 100.00f;
    this->DepartureTime = -1.00f;
    this->State = EDropPodState::WaitingToDrop;
    this->DrillSpeed = 500.00f;
    this->FreeFallAcceleration = 100.00f;
    this->FreeFallSpeed = 2000.00f;
}

