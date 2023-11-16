#include "SeasonSaveEntry.h"

FSeasonSaveEntry::FSeasonSaveEntry() {
    this->CountSeasonContentDisabled = 0;
    this->CountSeasonContentReenabled = 0;
    this->XP = 0;
    this->Tokens = 0;
    this->bSeasonCompletedAnnounced = false;
    this->HasClaimedAllRewards = false;
    this->RewardsClaimedAfterMaxLevel = 0;
    this->ClaimedScripChallenges = 0;
    this->PlagueHeartsUsed = 0;
    this->TimePlayedAtSeasonStart = 0.00f;
    this->ChallengesCompletedAtSeasonStart = 0.00f;
    this->OptedOutOfSeasonContent = false;
}

