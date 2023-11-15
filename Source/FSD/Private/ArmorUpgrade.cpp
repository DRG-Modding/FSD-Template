#include "ArmorUpgrade.h"
#include "Templates/SubclassOf.h"

UArmorUpgrade::UArmorUpgrade() {
    this->upgradeType = EArmorUpgradeType::RegenDelay;
}

FUpgradeValues UArmorUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> armorClass, EArmorUpgradeType aUpgradeType) {
    return FUpgradeValues{};
}


