#include "SeasonSettings.h"

USeasonSettings::USeasonSettings() {
    this->CurrentSeasonIndex = -1;
    this->MaxActiveChallenges = 0;
    this->XPPerLevel = 0;
    this->XPToPerforcemancePointsCurve = NULL;
    this->TreeOfVanitySnapSize = 0;
    this->SpecialChallengeChange = 0.00f;
    this->HeartsColledtedStat = NULL;
    this->HeartsPerScrip = 4;
    this->NumberOfScriptsFromPlague = 10;
}

USeason* USeasonSettings::GetSeason(int32 Season) const {
    return NULL;
}


