#include "ArmorUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues UArmorUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> armorClass, EArmorUpgradeType aUpgradeType) {
    return FUpgradeValues{};
}

UArmorUpgrade::UArmorUpgrade() {
    this->upgradeType = EArmorUpgradeType::RegenDelay;
}

