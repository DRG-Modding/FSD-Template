#include "InventoryItemUpgrade.h"
#include "Templates/SubclassOf.h"

UInventoryItemUpgrade::UInventoryItemUpgrade() {
    this->upgradeType = EInventoryItemUpgradeType::MovementSpeedWhileUsing;
}

FUpgradeValues UInventoryItemUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EInventoryItemUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


