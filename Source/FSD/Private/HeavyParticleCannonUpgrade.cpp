#include "HeavyParticleCannonUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UHeavyParticleCannonUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EHeavyParticleCannonUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UHeavyParticleCannonUpgrade::UHeavyParticleCannonUpgrade() {
    this->upgradeType = EHeavyParticleCannonUpgrade::ReloadOnButtonRelease;
}

