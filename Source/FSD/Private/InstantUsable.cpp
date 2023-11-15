#include "InstantUsable.h"
#include "Net/UnrealNetwork.h"

UInstantUsable::UInstantUsable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SwitchToUsingState = false;
    this->bShowUsingUI = true;
    this->AudioCompletedUse = NULL;
    this->UseDelayedAudio = false;
    this->AudioDelay = 0.00f;
    this->RefreshDelayOnNewUse = true;
    this->Usable = false;
    this->TurnOffAfterUse = false;
}

void UInstantUsable::SetCanUse(bool CanUse) {
}

void UInstantUsable::OnRep_Usable() {
}

void UInstantUsable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInstantUsable, Usable);
}


