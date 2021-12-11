#include "CSGSDFModulatedInstanceProperties.h"

FCSGSDFModulatedInstanceProperties::FCSGSDFModulatedInstanceProperties() {
    this->SDF = NULL;
    this->ModulateSDF = NULL;
    this->CellSize = EPreviewCellSize::PRV_CELL_SIZE_12_5;
    this->Seed = 0;
    this->ModulateMode = ESDFModulateMode::MM_Disabled;
}

