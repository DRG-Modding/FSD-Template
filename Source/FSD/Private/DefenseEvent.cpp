#include "DefenseEvent.h"
#include "Net/UnrealNetwork.h"

void ADefenseEvent::OnRep_Progress(float OldValue) {
}

void ADefenseEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADefenseEvent, Progress);
}

ADefenseEvent::ADefenseEvent() {
    this->DefendDuration = 60.00f;
    this->DefendWidget = NULL;
    this->Progress = 0.00f;
}

