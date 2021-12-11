#include "PatchResourceCreator.h"

UPatchResourceCreator::UPatchResourceCreator() {
    this->Positioning = NULL;
    this->CarveType = ECarveFilterType::ReplaceAll;
    this->PatchNoise = NULL;
    this->CarverNoise = NULL;
    this->range = 450.00f;
    this->NoiseRange = 350.00f;
    this->NoiseScale = 0.50f;
    this->Size = 1000.00f;
}

