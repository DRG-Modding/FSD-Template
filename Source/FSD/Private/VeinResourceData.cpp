#include "VeinResourceData.h"

UVeinResourceData::UVeinResourceData() {
    this->TerrainMaterial = NULL;
    this->UnitsPerLenth = 10.00f;
    this->ScaleToResourceDistribution = true;
    this->ResourceCreator = NULL;
}

UTerrainMaterial* UVeinResourceData::GetTerrainMaterial() const {
    return NULL;
}

float UVeinResourceData::GetDesiredAmount(AProceduralSetup* pls) const {
    return 0.0f;
}


