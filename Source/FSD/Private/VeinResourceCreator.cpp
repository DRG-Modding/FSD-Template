#include "VeinResourceCreator.h"

UVeinResourceCreator::UVeinResourceCreator() {
    this->Resource = NULL;
    this->Positioning = NULL;
    this->CarveType = ECarveFilterType::ReplaceAll;
    this->SegmentMaxDot = 0.70f;
    this->VeinWorldHorizontalMaxDot = 1.00f;
    this->VeinWorldHorizontalMinDot = -1.00f;
    this->Noise = NULL;
    this->range = 65.00f;
    this->NoiseRange = 35.00f;
}

