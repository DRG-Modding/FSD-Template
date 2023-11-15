#include "DataDepositObjective.h"
#include "Net/UnrealNetwork.h"

UDataDepositObjective::UDataDepositObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebrisPositioning = NULL;
    this->Complete = false;
}

void UDataDepositObjective::OnRep_Complete() {
}

void UDataDepositObjective::OnHackingProgressChange(float Progress) {
}

void UDataDepositObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDataDepositObjective, Complete);
}


