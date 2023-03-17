#include "EncounterManager.h"

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

void UEncounterManager::AddEncounterFromGroup(UEnemyGroupDescriptor* Group, float Difficulty, FVector Location, float Radius) {
}

UEncounterManager::UEncounterManager() {
    this->SpawnDistanceFromRoomBounds = 0.00f;
    this->ProceduralSetup = NULL;
    this->SpawnManager = NULL;
}

