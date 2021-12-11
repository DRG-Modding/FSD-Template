#include "DifficultyMutator.h"

UDifficultyMutator::UDifficultyMutator() {
    this->ExtraLargeEnemyDamageResistanceMultiplier = 1.00f;
    this->EnemyDamageResistanceMultiplier = 1.00f;
    this->SmallEnemyDamageResistanceMultiplier = 1.00f;
    this->EnemyDamageModifierMultiplier = 1.00f;
    this->EnemyCountModifierMultiplier = 1.00f;
    this->WeakpointDamageMultiplier = 1.00f;
    this->HazardBonus = 0.00f;
    this->FriendlyFireModifierMultiplier = 1.00f;
    this->EnemyWaveIntervalModifier = 0.00f;
    this->EnemyNormalWaveIntervalModifier = 0.00f;
    this->EnemyNormalWaveDifficultyMultiplier = 1.00f;
    this->ProjectileSpeedModifier = 1.00f;
    this->AttackCooldownModifier = 1.00f;
    this->SpeedModifier = 1.00f;
}

