#include "ArmorUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFSDPlayerState;

FUpgradeValues UArmorUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> armorClass, EArmorUpgradeType aUpgradeType) {
    return FUpgradeValues{};
}

UArmorUpgrade::UArmorUpgrade() {
    this->upgradeType = EArmorUpgradeType::RegenDelay;
}

