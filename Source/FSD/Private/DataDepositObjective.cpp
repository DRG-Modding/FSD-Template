#include "DataDepositObjective.h"
#include "Net/UnrealNetwork.h"

void UDataDepositObjective::OnRep_Complete() {
}

void UDataDepositObjective::OnHackingProgressChange(float Progress) {
}

void UDataDepositObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDataDepositObjective, Complete);
}

UDataDepositObjective::UDataDepositObjective() {
    this->DebrisPositioning = NULL;
    this->Complete = false;
}

