#include "TriggeredStatusEffectUpgrade.h"
#include "Templates/SubclassOf.h"

UTriggeredStatusEffectUpgrade::UTriggeredStatusEffectUpgrade() {
    this->StatusEffect = NULL;
    this->upgradeType = ETriggeredStatusEffectType::ShieldDestroyed;
    this->AoERange = 0.00f;
    this->OwnerEffect = NULL;
}

void UTriggeredStatusEffectUpgrade::OnEffectShouldTrigger(AActor* PlayerCharacter) {
}

FUpgradeValues UTriggeredStatusEffectUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UStatusEffect> NewStatusEffect, ETriggeredStatusEffectType aUpgradeType) {
    return FUpgradeValues{};
}


