#include "ConditionalDamageModifierUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UConditionalDamageModifierUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player) {
    return FUpgradeValues{};
}

UConditionalDamageModifierUpgrade::UConditionalDamageModifierUpgrade() {
    this->Condition = NULL;
}

