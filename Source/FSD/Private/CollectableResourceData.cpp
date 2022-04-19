#include "CollectableResourceData.h"

UCollectableResourceData::UCollectableResourceData() {
    this->ResourceCreator = NULL;
    this->Positioning = NULL;
    this->Rarity = 0.00f;
    this->InfluenceRadius = 250.00f;
    this->UseTerrainPlacement = false;
}

