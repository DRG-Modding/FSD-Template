#include "DifficultySetting.h"

class UObject;

bool UDifficultySetting::IsUnlocked(UObject* WorldContext) const {
    return false;
}

float UDifficultySetting::AddHazardBonus(float BaseValue) const {
    return 0.0f;
}

UDifficultySetting::UDifficultySetting() {
    this->CampaignRequirement = NULL;
    this->SelectedByDefaultCampaignRequirement = NULL;
    this->EnvironmentalDamageModifier = 0.50f;
    this->ExtraLargeEnemyDamageResistance.AddDefaulted(4);
    this->ExtraLargeEnemyDamageResistanceB.AddDefaulted(4);
    this->ExtraLargeEnemyDamageResistanceC.AddDefaulted(4);
    this->ExtraLargeEnemyDamageResistanceD.AddDefaulted(4);
    this->EnemyDamageResistance.AddDefaulted(4);
    this->SmallEnemyDamageResistance.AddDefaulted(4);
    this->EnemyDamageModifier.AddDefaulted(4);
    this->EnemyToEnemyDamageModifier = 1.00f;
    this->EnemyCountModifier.AddDefaulted(4);
    this->BossDifficultyScaler = 1.00f;
    this->PointExtractionScaler = 1.00f;
    this->SpecialEncounterModifier = 1.00f;
    this->HazardBonus = 0.00f;
    this->friendlyFireModifier = 0.33f;
    this->WaveStartDelayScale = 1.00f;
    this->MinPoolSize = 5;
    this->SpeedModifier = 1.00f;
    this->AttackCooldownModifier = 1.00f;
    this->ProjectileSpeedModifier = 1.00f;
    this->DifficultyGroup = 0;
    this->DifficultyGroupIndex = 0;
    this->HeathRegenerationMax = 0.25f;
    this->ReviveHealthRatio = 0.40f;
    this->EliteChanceModifier = 0.00f;
    this->EliteCooldown = 60.00f;
    this->MaxActiveElites = 1;
}

