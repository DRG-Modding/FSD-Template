#include "DamageUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFSDPlayerState;

FUpgradeValues UDamageUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, EDamageUpgrade NewUpgradeType, EDamageComponentType NewDamageComponentType) {
    return FUpgradeValues{};
}

UDamageUpgrade::UDamageUpgrade() {
    this->upgradeType = EDamageUpgrade::Damage;
    this->DamageComponentType = EDamageComponentType::Primary;
    this->RequiredClass = NULL;
}

