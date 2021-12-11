#include "MissionGenerationManager.h"

class UGeneratedMission;

TArray<UGeneratedMission*> UMissionGenerationManager::GetMissions(int32 Seed) {
    return TArray<UGeneratedMission*>();
}

UGeneratedMission* UMissionGenerationManager::GetMissionFromSeeds(int32 GlobalSeed, int32 MissionSeed) {
    return NULL;
}

TArray<UGeneratedMission*> UMissionGenerationManager::GetAvailableMissions() {
    return TArray<UGeneratedMission*>();
}

UMissionGenerationManager::UMissionGenerationManager() {
    this->ResetSelectedMission = false;
}

