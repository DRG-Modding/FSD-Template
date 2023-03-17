#include "MicrowavegunUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UMicrowavegunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EMicrowaveGunUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UMicrowavegunUpgrade::UMicrowavegunUpgrade() {
    this->upgradeType = EMicrowaveGunUpgrade::ESlowOnHit;
}

