#include "GrapplingHookUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues UGrapplingHookUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EGrapplingHookUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UGrapplingHookUpgrade::UGrapplingHookUpgrade() {
    this->upgradeType = EGrapplingHookUpgrade::MaxDistance;
}

