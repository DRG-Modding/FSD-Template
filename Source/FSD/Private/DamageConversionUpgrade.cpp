#include "DamageConversionUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class UDamageClass;
class AFSDPlayerState;

FUpgradeValues UDamageConversionUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, UDamageClass* NewDamageClass) {
    return FUpgradeValues{};
}

UDamageConversionUpgrade::UDamageConversionUpgrade() {
    this->DamageClass = NULL;
    this->ConversionPercentage = 0.50f;
    this->DamageIsAdded = false;
    this->RequiredClass = NULL;
    this->Condition = NULL;
}

