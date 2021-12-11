#include "GemResourceData.h"

class AFSDGameState;

int32 UGemResourceData::GetCollectedGemsCreditValue(AFSDGameState* GameState) {
    return 0;
}

int32 UGemResourceData::GetCollectedGemsAmount(AFSDGameState* GameState) {
    return 0;
}

UGemResourceData::UGemResourceData() {
    this->DebrisPositioning = NULL;
    this->CheckIfCompletelyCoveredByTerrain = false;
    this->ResourceCreator = NULL;
    this->InfluencerRange = 450.00f;
}

