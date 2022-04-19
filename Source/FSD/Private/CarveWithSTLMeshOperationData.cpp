#include "CarveWithSTLMeshOperationData.h"

FCarveWithSTLMeshOperationData::FCarveWithSTLMeshOperationData() {
    this->OperationNumber = 0;
    this->STLMeshCarver = NULL;
    this->StaticMeshCarver = NULL;
    this->Material = NULL;
    this->CarveFilter = ECarveFilterType::ReplaceAll;
    this->Precious = EPreciousMaterialOptions::TurnIntoGems;
}

