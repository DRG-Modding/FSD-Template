#include "HeavyParticleCannonUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UHeavyParticleCannonUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EHeavyParticleCannonUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UHeavyParticleCannonUpgrade::UHeavyParticleCannonUpgrade() {
    this->upgradeType = EHeavyParticleCannonUpgrade::ReloadOnButtonRelease;
}

