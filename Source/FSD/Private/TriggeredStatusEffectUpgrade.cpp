#include "TriggeredStatusEffectUpgrade.h"
#include "Templates/SubclassOf.h"

class UStatusEffect;
class AActor;
class AFSDPlayerState;

void UTriggeredStatusEffectUpgrade::OnEffectShouldTrigger(AActor* PlayerCharacter) {
}

FUpgradeValues UTriggeredStatusEffectUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UStatusEffect> NewStatusEffect, ETriggeredStatusEffectType aUpgradeType) {
    return FUpgradeValues{};
}

UTriggeredStatusEffectUpgrade::UTriggeredStatusEffectUpgrade() {
    this->StatusEffect = NULL;
    this->upgradeType = ETriggeredStatusEffectType::ShieldDestroyed;
    this->AoERange = 0.00f;
    this->OwnerEffect = NULL;
}

