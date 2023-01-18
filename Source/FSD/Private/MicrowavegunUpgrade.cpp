#include "MicrowavegunUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues UMicrowavegunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EMicrowaveGunUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UMicrowavegunUpgrade::UMicrowavegunUpgrade() {
    this->upgradeType = EMicrowaveGunUpgrade::ESlowOnHit;
}

