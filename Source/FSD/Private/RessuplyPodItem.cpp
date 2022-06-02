#include "RessuplyPodItem.h"
#include "Net/UnrealNetwork.h"

class UObject;
class UItemPlacerAggregator;

void ARessuplyPodItem::Server_Call_Resupply_Implementation(const FVector& Location) {
}
bool ARessuplyPodItem::Server_Call_Resupply_Validate(const FVector& Location) {
    return true;
}


void ARessuplyPodItem::OnRep_Used() {
}

int32 ARessuplyPodItem::GetResourceCost(UObject* WorldContextObject) const {
    return 0;
}

UItemPlacerAggregator* ARessuplyPodItem::GetActiveAggregator() const {
    return NULL;
}

void ARessuplyPodItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARessuplyPodItem, Used);
}

ARessuplyPodItem::ARessuplyPodItem() {
    this->ResupplyBeacon = NULL;
    this->ItemPlacerClass = NULL;
    this->ItemPlacerInstance = NULL;
    this->SupplyPodClass = NULL;
    this->ResourceCost = 0;
    this->CoolDown = 0.00f;
    this->Used = false;
}

