#include "EncounterManager.h"

UEncounterManager::UEncounterManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnDistanceFromRoomBounds = 0.00f;
    this->ProceduralSetup = NULL;
    this->SpawnManager = NULL;
}

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


