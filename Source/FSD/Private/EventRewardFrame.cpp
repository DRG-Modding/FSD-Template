#include "EventRewardFrame.h"
#include "Net/UnrealNetwork.h"
#include "SpecialEventUsableComponent.h"

AEventRewardFrame::AEventRewardFrame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->EventUsable = CreateDefaultSubobject<USpecialEventUsableComponent>(TEXT("EventUsable"));
    this->keyInserted = false;
}

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


