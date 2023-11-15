#include "MicrowavegunUpgrade.h"
#include "Templates/SubclassOf.h"

UMicrowavegunUpgrade::UMicrowavegunUpgrade() {
    this->upgradeType = EMicrowaveGunUpgrade::ESlowOnHit;
}

FUpgradeValues UMicrowavegunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EMicrowaveGunUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}


