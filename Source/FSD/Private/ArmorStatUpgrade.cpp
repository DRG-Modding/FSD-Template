#include "ArmorStatUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFSDPlayerState;
class UPawnStat;

FUpgradeValues UArmorStatUpgrade::GetUpgradedStatValue(AFSDPlayerState* Player, TSubclassOf<AActor> armorClass, UPawnStat* NewStat) {
    return FUpgradeValues{};
}

UArmorStatUpgrade::UArmorStatUpgrade() {
    this->Stat = NULL;
}

