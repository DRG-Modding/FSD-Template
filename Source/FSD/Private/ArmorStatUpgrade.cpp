#include "ArmorStatUpgrade.h"
#include "Templates/SubclassOf.h"

class UPawnStat;
class AFSDPlayerState;
class AActor;

FUpgradeValues UArmorStatUpgrade::GetUpgradedStatValue(AFSDPlayerState* Player, TSubclassOf<AActor> armorClass, UPawnStat* NewStat) {
    return FUpgradeValues{};
}

UArmorStatUpgrade::UArmorStatUpgrade() {
    this->Stat = NULL;
}

