#include "GatlingHotShellsBonusUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class UDamageClass;
class AFSDPlayerState;

FUpgradeValues UGatlingHotShellsBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, UDamageClass* NewDamageClass) {
    return FUpgradeValues{};
}

UGatlingHotShellsBonusUpgrade::UGatlingHotShellsBonusUpgrade() {
    this->DamageClass = NULL;
    this->ConversionPercentage = 0.50f;
    this->DamageIsAdded = false;
    this->TemperatureRequired = 50.00f;
}

