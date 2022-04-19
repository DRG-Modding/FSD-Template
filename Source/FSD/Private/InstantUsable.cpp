#include "InstantUsable.h"
#include "Net/UnrealNetwork.h"

void UInstantUsable::SetCanUse(bool CanUse) {
}

void UInstantUsable::OnRep_Usable() {
}

void UInstantUsable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInstantUsable, Usable);
}

UInstantUsable::UInstantUsable() {
    this->bShowUsingUI = true;
    this->AudioCompletedUse = NULL;
    this->Usable = false;
    this->TurnOffAfterUse = false;
}

