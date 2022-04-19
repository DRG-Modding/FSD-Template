#include "ShieldGeneratorItem.h"
#include "Net/UnrealNetwork.h"
#include "CapacityHoldingItemAggregator.h"




void AShieldGeneratorItem::OnRep_UnchargedCount(int32 OldCount) {
}

bool AShieldGeneratorItem::GetIsRecharging() const {
    return false;
}

void AShieldGeneratorItem::GeneratorReturned() {
}

void AShieldGeneratorItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShieldGeneratorItem, UnchargedCount);
}

AShieldGeneratorItem::AShieldGeneratorItem() {
    this->ChargeCapacity = CreateDefaultSubobject<UCapacityHoldingItemAggregator>(TEXT("ChargeCapacity"));
    this->CarryCapacity = CreateDefaultSubobject<UCapacityHoldingItemAggregator>(TEXT("Capacity"));
    this->RechargeDuration = 2.00f;
    this->UnchargedCount = 0;
    this->RechargeProgress = 0.00f;
    this->SupplyStatusWeight = 1.00f;
    this->ShoutRecarged = NULL;
}

