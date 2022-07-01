#include "EncounterManager.h"

class UCritterDescriptor;
class UEnemyDescriptor;

void UEncounterManager::ShowSpawnLocations() {
}

TArray<UEnemyDescriptor*> UEncounterManager::GetEnemyPool() const {
    return TArray<UEnemyDescriptor*>();
}

TArray<UEnemyDescriptor*> UEncounterManager::GetEncounterPool() const {
    return TArray<UEnemyDescriptor*>();
}

TArray<UCritterDescriptor*> UEncounterManager::GetCritterPool() const {
    return TArray<UCritterDescriptor*>();
}

UEncounterManager::UEncounterManager() {
    this->SpawnDistanceFromRoomBounds = 0.00f;
    this->ProceduralSetup = NULL;
    this->SpawnManager = NULL;
}

