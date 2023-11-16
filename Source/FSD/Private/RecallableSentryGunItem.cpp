#include "RecallableSentryGunItem.h"
#include "CapacityHoldingItemAggregator.h"
#include "ItemPlacerAggregator.h"

ARecallableSentryGunItem::ARecallableSentryGunItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSentryCount = 1;
    this->MinDistanceBetweenSentries = 75.00f;
    this->RecallHoldDuration = 1.00f;
    this->AmmoCapacity = CreateDefaultSubobject<UCapacityHoldingItemAggregator>(TEXT("AmmoCapacity"));
    this->ItemPlacer = CreateDefaultSubobject<UItemPlacerAggregator>(TEXT("ItemPlacer"));
    this->LoadoutClass = NULL;
    this->SentryGunObjectClass = NULL;
    this->SupplyStatusWeight = 1.00f;
    this->SentryAngleRestriction = 0.00f;
    this->bIsUpgraded = false;
}



bool ARecallableSentryGunItem::HasAmmoLeft() {
    return false;
}

ARecallableSentryGun* ARecallableSentryGunItem::GetSelectedSentryGun() {
    return NULL;
}

TArray<ARecallableSentryGun*> ARecallableSentryGunItem::GetActiveSentryGuns() {
    return TArray<ARecallableSentryGun*>();
}

bool ARecallableSentryGunItem::AreAllSentriesPlaced() const {
    return false;
}


