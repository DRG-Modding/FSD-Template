#include "MissionGenerationManager.h"

UMissionGenerationManager::UMissionGenerationManager() {
    this->ResetSelectedMission = false;
}

TArray<UGeneratedMission*> UMissionGenerationManager::GetMissions(int32 Seed) {
    return TArray<UGeneratedMission*>();
}

UGeneratedMission* UMissionGenerationManager::GetMissionFromSeeds(int32 GlobalSeed, int32 MissionSeed) {
    return NULL;
}

TArray<UGeneratedMission*> UMissionGenerationManager::GetAvailableMissionsWithSeasonContentCheck(bool HasOptedOutOfSeasonContent) {
    return TArray<UGeneratedMission*>();
}

TArray<UGeneratedMission*> UMissionGenerationManager::GetAvailableMissions() {
    return TArray<UGeneratedMission*>();
}


