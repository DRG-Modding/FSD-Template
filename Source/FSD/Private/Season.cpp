#include "Season.h"

USeason::USeason() {
    this->SeasonNumber = 0;
    this->MapKey = -1;
    this->TreeOfVanity = NULL;
    this->SeasonDLC = NULL;
    this->MissionMapEventZoneType = ESeasonMissionMapOverlayType::None;
    this->NumberOfScripChallenges = 0;
    this->ScripChallenge = NULL;
    this->SeasonWaveInMissionChance = 0.00f;
    this->SeasonWarning = NULL;
    this->CaveDepthMultiplier = 1.00f;
    this->HeartsColledtedStat = NULL;
}

UTexture2D* USeason::GetTokenTexture(int32 tokenCount, bool hasEffect) const {
    return NULL;
}

void USeason::AddUnassignedReward(int32 Index, UReward* Reward) {
}

void USeason::AddLevel(int32 Index, UReward* Reward, UReward* specialReward) {
}


