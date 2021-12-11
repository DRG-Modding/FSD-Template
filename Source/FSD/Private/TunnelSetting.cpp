#include "TunnelSetting.h"

UTunnelSetting::UTunnelSetting() {
    this->PathfinderNoise = NULL;
    this->BaseSegmentSetting = NULL;
    this->TightBendSegmentSetting = NULL;
    this->DirtSegmentSetting = NULL;
    this->DirtOffsetSetting = NULL;
    this->Weight = 1.00f;
}

