#include "HeavyParticleCannonUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues UHeavyParticleCannonUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EHeavyParticleCannonUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UHeavyParticleCannonUpgrade::UHeavyParticleCannonUpgrade() {
    this->upgradeType = EHeavyParticleCannonUpgrade::ReloadOnButtonRelease;
}

