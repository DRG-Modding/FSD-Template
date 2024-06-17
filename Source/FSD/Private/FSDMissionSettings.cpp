#include "FSDMissionSettings.h"

UFSDMissionSettings::UFSDMissionSettings() {
}

float UFSDMissionSettings::GetTotalHazPlusBonus(const FGameDifficulty& Difficulty) {
    return 0.0f;
}

float UFSDMissionSettings::GetTotalHazardBonus(UObject* WorldContextObject, UGeneratedMission* mission, const FGameDifficulty& Difficulty) {
    return 0.0f;
}


