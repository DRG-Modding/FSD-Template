#include "DefensePointActor.h"
#include "Net/UnrealNetwork.h"

class APlayerCharacter;

void ADefensePointActor::SetState(EDefendPointState State) {
}

void ADefensePointActor::OnRep_DefendState() {
}

void ADefensePointActor::OnDefensePointActivated(APlayerCharacter* Player, EInputKeys Key) {
}




void ADefensePointActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADefensePointActor, DefendState);
}

ADefensePointActor::ADefensePointActor() {
    this->DefenseEvent = NULL;
    this->ActiveDefenceEvent = NULL;
    this->DefendState = EDefendPointState::Idle;
}

