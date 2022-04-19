#include "EventRewardFrame.h"
#include "Net/UnrealNetwork.h"
#include "SpecialEventUsableComponent.h"

class AEventRewardDispenser;

void AEventRewardFrame::TurnOff() {
}

void AEventRewardFrame::SetKeyInserted(bool NewKeyInserted) {
}

void AEventRewardFrame::SetDispenseRewards(bool dispensRewards) {
}

void AEventRewardFrame::RegisterDispenser(AEventRewardDispenser* Dispenser) {
}

bool AEventRewardFrame::GetDispensRewards() const {
    return false;
}

void AEventRewardFrame::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEventRewardFrame, keyInserted);
    DOREPLIFETIME(AEventRewardFrame, EventPlayerIDs);
}

AEventRewardFrame::AEventRewardFrame() {
    this->EventUsable = CreateDefaultSubobject<USpecialEventUsableComponent>(TEXT("EventUsable"));
    this->keyInserted = false;
}

