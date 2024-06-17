#include "PLSTester.h"

APLSTester::APLSTester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PLSSeed = -1;
    this->MissionSeed = -1;
    this->GlobalMissionIndex = 0;
    this->limitComplexity = NULL;
    this->limitDuration = NULL;
    this->Mutator = NULL;
    this->Challenge = NULL;
    this->SpecialEvent = NULL;
    this->Biome = NULL;
    this->MissionTemplate = NULL;
    this->CustomMissionTemplate = NULL;
    this->OverrideDifficulty = NULL;
    this->SimulatePlayerCount = -1;
}


