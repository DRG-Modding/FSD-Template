#include "FindPointKeepingDistanceProbe.h"

AFindPointKeepingDistanceProbe::AFindPointKeepingDistanceProbe() {
    this->MinDistance = 800.00f;
    this->MaxDistance = 2000.00f;
    this->Target = NULL;
    this->IdealTargetDist = 1500.00f;
}

