#include "ArmorStatUpgrade.h"
#include "Templates/SubclassOf.h"

UArmorStatUpgrade::UArmorStatUpgrade() {
    this->Stat = NULL;
}

FUpgradeValues UArmorStatUpgrade::GetUpgradedStatValue(AFSDPlayerState* Player, TSubclassOf<AActor> armorClass, UPawnStat* NewStat) {
    return FUpgradeValues{};
}


