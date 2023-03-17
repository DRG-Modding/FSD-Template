#include "EnemySpawnManager.h"
#include "Templates/SubclassOf.h"

void UEnemySpawnManager::SpawnerDestroyed(APawn* Actor) {
}

bool UEnemySpawnManager::SpawnEnemy(UEnemyDescriptor* descriptor, const FTransform& Transform, const FEnemySpawnedDelegate& Callback, bool useSpawnFX, bool Alert) {
    return false;
}

void UEnemySpawnManager::SetSpawningEnabled(bool newSpawningEnabled) {
}

void UEnemySpawnManager::RemoveGlobalStatusEffect(TSubclassOf<UStatusEffect> StatusEffect) {
}

void UEnemySpawnManager::RegisterSpawner(APawn* Actor) {
}

void UEnemySpawnManager::RegisterSpawnedEnemy(AActor* enemy) {
}

void UEnemySpawnManager::PromoteToCritical(APawn* Pawn) {
}

void UEnemySpawnManager::OnMatchStarted() {
}

void UEnemySpawnManager::OnMatchEnded() {
}

bool UEnemySpawnManager::GetSpawningEnabled() const {
    return false;
}

APawn* UEnemySpawnManager::FindEnemyByClass(TSubclassOf<APawn> PawnClass, bool isSwarmerEnemy) const {
    return NULL;
}

TArray<APawn*> UEnemySpawnManager::FindEnemiesByClass(TSubclassOf<APawn> PawnClass, bool isSwarmerEnemy) const {
    return TArray<APawn*>();
}

void UEnemySpawnManager::EnemyDestroyed(AActor* Actor) {
}

void UEnemySpawnManager::EnemyDeath(UHealthComponentBase* HealthComponent) {
}

void UEnemySpawnManager::DestroyAllEnemies() {
}

bool UEnemySpawnManager::CanSpawn(UEnemyDescriptor* EnemyDescriptor) const {
    return false;
}

void UEnemySpawnManager::AddGlobalStatusEffect(TSubclassOf<UStatusEffect> StatusEffect) {
}

UEnemySpawnManager::UEnemySpawnManager() {
    this->SpawnEffects = NULL;
    this->MaxActiveEnemies = 0;
    this->MaxActiveSwarmers = 80;
    this->MaxActiveCritters = 40;
    this->MaxDistanceBeforeCleanup = 0.00f;
    this->ProceduralSetup = NULL;
    this->bDestroyingAllEnemies = false;
}

