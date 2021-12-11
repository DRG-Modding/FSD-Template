#include "TunnelParameters.h"

UTunnelParameters::UTunnelParameters() {
    this->PathfinderNoise = NULL;
    this->PathZPenalty = 0.00f;
    this->PathDirectionPenalty = 0.00f;
    this->PathEntranceAnglePenalty = 0.00f;
    this->ObstacleCostScale = 1.00f;
    this->AllowBlockedEntrances = false;
    this->PickBestMatchingEntrance = false;
}

