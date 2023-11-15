#include "DefenseEvent.h"
#include "Net/UnrealNetwork.h"

ADefenseEvent::ADefenseEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefendDuration = 60.00f;
    this->DefendWidget = NULL;
    this->Progress = 0.00f;
}

void ADefenseEvent::OnRep_Progress(float OldValue) {
}

void ADefenseEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADefenseEvent, Progress);
}


