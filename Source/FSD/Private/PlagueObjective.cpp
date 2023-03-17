#include "PlagueObjective.h"
#include "Net/UnrealNetwork.h"

void UPlagueObjective::OnRep_CurrentPlagueAmount(int32 OldAmount) {
}

TArray<APlagueInfectionNode*> UPlagueObjective::GetPlagueCenters() {
    return TArray<APlagueInfectionNode*>();
}

void UPlagueObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlagueObjective, StartPlagueAmount);
    DOREPLIFETIME(UPlagueObjective, CurrentPlagueAmount);
    DOREPLIFETIME(UPlagueObjective, PlagueController);
}

UPlagueObjective::UPlagueObjective() {
    this->StartPlagueAmount = -1;
    this->CurrentPlagueAmount = -1;
    this->TargetPlagueAmount = -1;
    this->PercentageRequiredForCompletion = 0.50f;
    this->SpawningTowersCount = 2;
    this->NodeKilledShout = NULL;
    this->LastNodeKilledShout = NULL;
    this->OverridePrimaryObjCompletedShout_SelfCompleted = NULL;
    this->OverridePrimaryObjCompletedShout_SelfNotCompleted = NULL;
    this->AllPlagueCleaned = false;
    this->PlagueController = NULL;
    this->ScriptedPlagueWaveWeight = 0.00f;
}

