#include "DroppableOutpost.h"
#include "AutoCarverComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void ADroppableOutpost::StartDrilling() {
}

void ADroppableOutpost::PrepForTakeOff() {
}

void ADroppableOutpost::OnRep_State() {
}





ADroppableOutpost* ADroppableOutpost::DropOutpostToMission(UObject* WorldContextObject, TSubclassOf<ADroppableOutpost> podClass, const FVector& Location) {
    return NULL;
}

void ADroppableOutpost::Depart() {
}

void ADroppableOutpost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADroppableOutpost, TargetLocation);
    DOREPLIFETIME(ADroppableOutpost, State);
}

ADroppableOutpost::ADroppableOutpost() {
    this->DropHeight = 3500.00f;
    this->AutoCarver = CreateDefaultSubobject<UAutoCarverComponent>(TEXT("AutoCarver"));
    this->DepartCurve = NULL;
    this->CarverRotationSpeed = 100.00f;
    this->DepartureTime = -1.00f;
    this->State = EDroppableOutpostState::WaitingToDrop;
    this->DrillSpeed = 500.00f;
    this->FreeFallAcceleration = 100.00f;
    this->FreeFallSpeed = 2000.00f;
}

