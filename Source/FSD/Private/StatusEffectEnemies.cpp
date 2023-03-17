#include "StatusEffectEnemies.h"

void UStatusEffectEnemies::OnEnemySpawned(APawn* enemy, UEnemyDescriptor* descriptor) {
}

UStatusEffectEnemies::UStatusEffectEnemies() {
    this->ChanceToApply = 1.00f;
    this->OverrideReplacesDefault = true;
}

