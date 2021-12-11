#include "SplineSegmentCarveOperationData.h"

FSplineSegmentCarveOperationData::FSplineSegmentCarveOperationData() {
    this->OperationNumber = 0;
    this->Material = NULL;
    this->CarveFilter = ECarveFilterType::ReplaceAll;
    this->Precious = EPreciousMaterialOptions::TurnIntoGems;
}

