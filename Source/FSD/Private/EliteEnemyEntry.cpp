#include "EliteEnemyEntry.h"

FEliteEnemyEntry::FEliteEnemyEntry() {
    this->HeroChance = 0.00f;
    this->StatusEffect = NULL;
    this->OverrideHealthScaling = false;
    this->HealthScalingOverride = EEnemyHealthScaling::SmallEnemy;
}

