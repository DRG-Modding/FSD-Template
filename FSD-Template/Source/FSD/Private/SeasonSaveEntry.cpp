#include "SeasonSaveEntry.h"

FSeasonSaveEntry::FSeasonSaveEntry() {
    this->XP = 0;
    this->Tokens = 0;
    this->HasClaimedAllRewards = false;
    this->RewardsClaimedAfterMaxLevel = 0;
    this->ClaimedScripChallenges = 0;
    this->TimePlayedAtSeasonStart = 0.00f;
    this->ChallengesCompletedAtSeasonStart = 0.00f;
}

