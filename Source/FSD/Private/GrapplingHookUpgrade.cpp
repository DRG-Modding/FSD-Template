#include "GrapplingHookUpgrade.h"
#include "Templates/SubclassOf.h"

UGrapplingHookUpgrade::UGrapplingHookUpgrade() {
    this->upgradeType = EGrapplingHookUpgrade::MaxDistance;
}

FUpgradeValues UGrapplingHookUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EGrapplingHookUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}


