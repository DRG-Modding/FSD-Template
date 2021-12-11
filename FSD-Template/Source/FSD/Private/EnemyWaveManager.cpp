#include "EnemyWaveManager.h"
#include "Templates/SubclassOf.h"

class UEnemyWaveController;
class UObject;
class APawn;

UEnemyWaveController* UEnemyWaveManager::TriggerWave(TSubclassOf<UEnemyWaveController> waveClass) {
    return NULL;
}

void UEnemyWaveManager::TriggerEndWave(bool cancelAllWaves) {
}

void UEnemyWaveManager::SpawnScriptedWave() {
}

void UEnemyWaveManager::PushDisableScriptedWaves(UObject* Owner) {
}

void UEnemyWaveManager::PushDisableNormalWaves(UObject* Owner) {
}

void UEnemyWaveManager::PopDisableScriptedWaves(UObject* Owner) {
}

void UEnemyWaveManager::PopDisableNormalWaves(UObject* Owner) {
}

void UEnemyWaveManager::OnMatchEnded() {
}

void UEnemyWaveManager::OnEnemySpawned(APawn* enemy) {
}

bool UEnemyWaveManager::AreScriptedWavesBlocked() const {
    return false;
}

bool UEnemyWaveManager::AreNormalWavesBlocked() const {
    return false;
}

UEnemyWaveManager::UEnemyWaveManager() {
    this->StartDelay = 50.00f;
    this->spawnRadiusFromSpawnPoint = 300.00f;
    this->ScriptedWavesEnabled = true;
    this->NormalWavesEnabled = false;
    this->OverrideDifficultyScriptedWaveInternal = false;
    this->GameMode = NULL;
    this->SpawnManager = NULL;
}

