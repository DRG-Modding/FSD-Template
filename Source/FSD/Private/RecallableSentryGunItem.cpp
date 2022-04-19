#include "RecallableSentryGunItem.h"
#include "CapacityHoldingItemAggregator.h"
#include "ItemPlacerAggregator.h"

class ARecallableSentryGun;


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

ARecallableSentryGunItem::ARecallableSentryGunItem() {
    this->MaxSentryCount = 1;
    this->MinDistanceBetweenSentries = 75.00f;
    this->RecallHoldDuration = 1.00f;
    this->AmmoCapacity = CreateDefaultSubobject<UCapacityHoldingItemAggregator>(TEXT("AmmoCapacity"));
    this->ItemPlacer = CreateDefaultSubobject<UItemPlacerAggregator>(TEXT("ItemPlacer"));
    this->LoadoutClass = NULL;
    this->SupplyStatusWeight = 1.00f;
    this->SentryAngleRestriction = 0.00f;
    this->bIsUpgraded = false;
}

