#include "FlatDamageUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;
class UDamageClass;

FUpgradeValues UFlatDamageUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, UDamageClass* NewDamageClass) {
    return FUpgradeValues{};
}

UFlatDamageUpgrade::UFlatDamageUpgrade() {
    this->Damage = 0.00f;
    this->DamageClass = NULL;
    this->RequiredClass = NULL;
    this->Condition = NULL;
}

