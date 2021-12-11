#include "SeasonChallenge.h"

class UTexture2D;

UTexture2D* USeasonChallenge::GetIconOutlined() {
    return NULL;
}

UTexture2D* USeasonChallenge::GetIcon() {
    return NULL;
}

USeasonChallenge::USeasonChallenge() {
    this->NumberOfChoices = 0;
    this->ChallengeWeight = 1.00f;
    this->bIsSpecialChallenge = false;
    this->MaxOccurences = 0;
    this->ChallengeAfterMaxOccurences = NULL;
}

