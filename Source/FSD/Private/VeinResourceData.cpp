#include "VeinResourceData.h"

UTerrainMaterial* UVeinResourceData::GetTerrainMaterial() const {
    return NULL;
}

UVeinResourceData::UVeinResourceData() {
    this->TerrainMaterial = NULL;
    this->UnitsPerLenth = 10.00f;
    this->ScaleToResourceDistribution = true;
    this->ResourceCreator = NULL;
}

