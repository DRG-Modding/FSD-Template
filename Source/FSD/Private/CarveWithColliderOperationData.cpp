#include "CarveWithColliderOperationData.h"

FCarveWithColliderOperationData::FCarveWithColliderOperationData() {
    this->OperationNumber = 0;
    this->StaticMesh = NULL;
    this->Material = NULL;
    this->CarveFilter = ECarveFilterType::ReplaceAll;
    this->ExpensiveNoise = 0.00f;
    this->Precious = EPreciousMaterialOptions::TurnIntoGems;
    this->CarveCellSize = CarveOptionsCellSize::CARVE_CELL_SIZE_25;
}

