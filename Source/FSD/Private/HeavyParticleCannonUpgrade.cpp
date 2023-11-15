#include "HeavyParticleCannonUpgrade.h"
#include "Templates/SubclassOf.h"

UHeavyParticleCannonUpgrade::UHeavyParticleCannonUpgrade() {
    this->upgradeType = EHeavyParticleCannonUpgrade::ReloadOnButtonRelease;
}

FUpgradeValues UHeavyParticleCannonUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EHeavyParticleCannonUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}


