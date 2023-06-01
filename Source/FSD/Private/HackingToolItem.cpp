#include "HackingToolItem.h"
#include "Net/UnrealNetwork.h"

void AHackingToolItem::Server_HackingCompleted_Implementation(UHackingUsableComponent* InUsable, bool InHackingSuccessful) {
}





void AHackingToolItem::OnRep_HackingUsable() {
}

void AHackingToolItem::HackingCompleted(bool InHackingSuccessful) {
}

void AHackingToolItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHackingToolItem, HackingUsable);
}

AHackingToolItem::AHackingToolItem() {
}

