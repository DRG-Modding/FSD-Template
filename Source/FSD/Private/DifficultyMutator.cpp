#include "DifficultyMutator.h"

UDifficultyMutator::UDifficultyMutator() {
    this->ExtraLargeEnemyDamageResistanceMultiplier = 1.00f;
    this->EnemyDamageResistanceMultiplier = 1.00f;
    this->SmallEnemyDamageResistanceMultiplier = 1.00f;
    this->EnemyDamageModifierMultiplier = 1.00f;
    this->EnemyCountModifierMultiplier = 1.00f;
    this->EnemyPoolSize = 0;
    this->EnemyDisruptivePoolSize = 0;
    this->VetaranChanceModifier = 1.00f;
    this->WeakpointDamageMultiplier = 1.00f;
    this->HazardBonus = 0.00f;
    this->ProjectileSpeedModifier = 1.00f;
    this->AttackCooldownModifier = 1.00f;
    this->SpeedModifier = 1.00f;
    this->MaxActiveEnemiesModifier = 1.00f;
    this->MaxActiveSwarmersModifier = 1.00f;
    this->FriendlyFireModifier = 1.00f;
    this->EnvironmentalDamageModifier = 1.00f;
}


