#include "InventoryItemUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UInventoryItemUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EInventoryItemUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UInventoryItemUpgrade::UInventoryItemUpgrade() {
    this->upgradeType = EInventoryItemUpgradeType::MovementSpeedWhileUsing;
}

