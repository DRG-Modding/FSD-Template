#include "RivalBombNode.h"
#include "Net/UnrealNetwork.h"
#include "HackingUsableComponent.h"

class APlayerCharacter;


void ARivalBombNode::OnRep_State() {
}

void ARivalBombNode::OnRep_RemainingHackTime() const {
}

void ARivalBombNode::OnNodeHackedByUser(APlayerCharacter* Player) {
}

void ARivalBombNode::OnHackTimerTick() {
}

float ARivalBombNode::GetRemainingTimePct() const {
    return 0.0f;
}

void ARivalBombNode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARivalBombNode, State);
    DOREPLIFETIME(ARivalBombNode, RivalBomb);
    DOREPLIFETIME(ARivalBombNode, RemainingHackTime);
    DOREPLIFETIME(ARivalBombNode, HackStartTime);
    DOREPLIFETIME(ARivalBombNode, BombIndex);
}

ARivalBombNode::ARivalBombNode() {
    this->RivalBombCable = NULL;
    this->HackingUsable = CreateDefaultSubobject<UHackingUsableComponent>(TEXT("HackingUsable"));
    this->State = ERivalBombNodeState::Inactive;
    this->BombCable = NULL;
    this->RivalBomb = NULL;
    this->RemainingHackTime = -1.00f;
    this->HackStartTime = 0.00f;
    this->BombIndex = -1;
}

