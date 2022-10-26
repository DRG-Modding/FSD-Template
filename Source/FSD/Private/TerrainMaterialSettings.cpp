#include "TerrainMaterialSettings.h"

UTerrainMaterialSettings::UTerrainMaterialSettings() {
    this->TwoHits.AddDefaulted(1);
    this->ThreeHits.AddDefaulted(2);
    this->FourHits.AddDefaulted(3);
    this->FiveHits.AddDefaulted(4);
    this->InfectionIncreasePerPlagueHit = 0.00f;
}

