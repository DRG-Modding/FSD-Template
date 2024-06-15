#include "StickFlameActorUpgrade.h"
#include "Templates/SubclassOf.h"

UStickFlameActorUpgrade::UStickFlameActorUpgrade() {
    this->stickyFlameClass = NULL;
    this->OverrideFlameLifetime = false;
    this->FlameLifetime = 1.00f;
}

FUpgradeValues UStickFlameActorUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, TSubclassOf<AStickyFlame> NewStickyFlameClass) {
    return FUpgradeValues{};
}


