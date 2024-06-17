#include "MissionGenerationManager.h"

UMissionGenerationManager::UMissionGenerationManager() {
}

TArray<UGeneratedMission*> UMissionGenerationManager::GetMissions(const FGlobalMissionSeed& Seed) {
    return TArray<UGeneratedMission*>();
}

UGeneratedMission* UMissionGenerationManager::GetMissionFromSeeds(const FGlobalMissionSeed& GlobalSeed, int32 MissionSeed) {
    return NULL;
}

TArray<UGeneratedMission*> UMissionGenerationManager::GetAvailableMissions() {
    return TArray<UGeneratedMission*>();
}


