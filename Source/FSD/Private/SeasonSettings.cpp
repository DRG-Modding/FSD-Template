#include "SeasonSettings.h"

USeasonSettings::USeasonSettings() {
    this->CurrentSeason = NULL;
    this->MaxActiveChallenges = 0;
    this->XPPerLevel = 0;
    this->XPToPerforcemancePointsCurve = NULL;
    this->TreeOfVanitySnapSize = 0;
    this->SpecialChallengeChange = 0.00f;
}

