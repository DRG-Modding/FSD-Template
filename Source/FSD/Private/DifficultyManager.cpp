#include "DifficultyManager.h"

UDifficultyManager::UDifficultyManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentVeteranCompositionSource = NULL;
    this->MinModifierEnemyCount = 0.30f;
    this->MinModifierAttackCooldown = 0.95f;
    this->MinModifierSpeed = 0.95f;
    this->ForcedPlayerCount = -1;
    this->GameMode = NULL;
    this->GameState = NULL;
}

FGameDifficulty UDifficultyManager::SelectGameDifficulty(int32 Index, TArray<FDifficultyMutatorItem> Mutators) {
    return FGameDifficulty{};
}

UDifficultySetting* UDifficultyManager::SelectDifficulty(int32 Index) {
    return NULL;
}

float UDifficultyManager::GetSpeedModifier() const {
    return 0.0f;
}

float UDifficultyManager::GetSmallEnemyDamageResistance() const {
    return 0.0f;
}

float UDifficultyManager::GetPointExtractionScaler() const {
    return 0.0f;
}

float UDifficultyManager::GetExtraLargeEnemyDamageResistanceD() const {
    return 0.0f;
}

float UDifficultyManager::GetExtraLargeEnemyDamageResistanceC() const {
    return 0.0f;
}

float UDifficultyManager::GetExtraLargeEnemyDamageResistanceB() const {
    return 0.0f;
}

float UDifficultyManager::GetExtraLargeEnemyDamageResistance() const {
    return 0.0f;
}

float UDifficultyManager::GetEnemyDamageResistance() const {
    return 0.0f;
}

float UDifficultyManager::GetEnemyDamageModifier() const {
    return 0.0f;
}

float UDifficultyManager::GetEnemyCountModifier() const {
    return 0.0f;
}

FGameDifficulty UDifficultyManager::GetCurrentGameDifficulty() const {
    return FGameDifficulty{};
}

UDifficultySetting* UDifficultyManager::GetCurrentDifficulty() const {
    return NULL;
}

float UDifficultyManager::GetBossDifficultyScaler() const {
    return 0.0f;
}


