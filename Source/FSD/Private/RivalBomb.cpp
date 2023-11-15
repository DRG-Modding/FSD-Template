#include "RivalBomb.h"
#include "Net/UnrealNetwork.h"

ARivalBomb::ARivalBomb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShowProgressBar = true;
    this->NodeHackTime = 14.00f;
    this->NumNodesToHack = 3;
    this->bDataCellPickedUp = false;
    this->DataCell = NULL;
    this->RivalBomb = NULL;
    this->NodePositioning = NULL;
    this->NodeCostCurve = NULL;
}

void ARivalBomb::UpdateNodesOnStart() {
}

void ARivalBomb::SpawnDataCell() {
}


void ARivalBomb::OnRep_DataCellPickedUp() {
}

void ARivalBomb::OnMatchStarted() {
}

void ARivalBomb::OnDataCellPickedUp(bool Attached, FVector PrevScale) {
}

void ARivalBomb::DeactivateAllNodes(bool failed) {
}

void ARivalBomb::ActivateNewNode() {
}

void ARivalBomb::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARivalBomb, bDataCellPickedUp);
}


