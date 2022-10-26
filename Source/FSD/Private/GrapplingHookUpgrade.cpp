#include "GrapplingHookUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFSDPlayerState;

FUpgradeValues UGrapplingHookUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EGrapplingHookUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UGrapplingHookUpgrade::UGrapplingHookUpgrade() {
    this->upgradeType = EGrapplingHookUpgrade::MaxDistance;
}

