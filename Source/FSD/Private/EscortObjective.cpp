#include "EscortObjective.h"
#include "Net/UnrealNetwork.h"

class AEscortMule;
class AExtractorItem;
class UCappedResource;

void UEscortObjective::SyncProgressTimer() {
}

void UEscortObjective::StartShellBreak_Implementation() {
}


void UEscortObjective::SetState(EEscortMissionState NewState) {
}

void UEscortObjective::SetShellBreakPaused(bool newPaused) {
}

void UEscortObjective::SetEscortMule(AEscortMule* MULE) {
}

void UEscortObjective::RegisterFuelCannister(AExtractorItem* extractor) {
}

void UEscortObjective::RecordFailStage(bool muleDied) {
}

void UEscortObjective::OnResourceChanged(UCappedResource* CappedResource, float Amount) {
}

void UEscortObjective::OnRep_FullCanisters() {
}

void UEscortObjective::OnRep_EscortState() {
}

void UEscortObjective::OnRep_EscortMule() {
}

void UEscortObjective::OnRep_AreasToScan(int32 prevAmount) {
}

void UEscortObjective::OnRep_AreasScanned(int32 prevAmount) {
}


void UEscortObjective::OnHealthChanged(float Health) {
}

void UEscortObjective::OnFullCanistersChanged(int32 Amount) {
}


float UEscortObjective::GetShellBreakProgress() {
    return 0.0f;
}

bool UEscortObjective::DoesPathExist(FVector Start, FVector End) {
    return false;
}

void UEscortObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEscortObjective, AreasToScan);
    DOREPLIFETIME(UEscortObjective, AreasScanned);
    DOREPLIFETIME(UEscortObjective, State);
    DOREPLIFETIME(UEscortObjective, ServerShellProgress);
    DOREPLIFETIME(UEscortObjective, FullCanisters);
    DOREPLIFETIME(UEscortObjective, EscortMule);
    DOREPLIFETIME(UEscortObjective, EscortDestination);
}

UEscortObjective::UEscortObjective() {
    this->DidRescueDorettaHead = false;
    this->AreasToScan = 0;
    this->ScanCount = 0;
    this->Positioning = NULL;
    this->EscortMulePositioning = NULL;
    this->CostDistanceCurve = NULL;
    this->DebrisRadius = 1500.00f;
    this->AreasScanned = 0;
    this->State = EEscortMissionState::InGarage;
    this->FinalBattle = false;
    this->FuelResource = NULL;
    this->GemResource = NULL;
    this->ServerShellProgress = 0.00f;
    this->SecondsToDestroyHeartstone = 120;
    this->FullCanistersRequired = 2;
    this->FullCanisters = 0;
    this->FuelResourceAmount = 100;
    this->EscortMule = NULL;
    this->EscortDestination = NULL;
}

