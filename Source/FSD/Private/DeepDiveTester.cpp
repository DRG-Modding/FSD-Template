#include "DeepDiveTester.h"

ADeepDiveTester::ADeepDiveTester() {
    this->Biome = NULL;
    this->Seed = -1;
    this->MissionStructure = EMissionStructure::DeepDive_Normal;
    this->Stages.AddDefaulted(3);
}

