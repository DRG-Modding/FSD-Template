#include "TerrainMaterialCore.h"

UTerrainMaterialCore::UTerrainMaterialCore() {
    this->BurntMaterial = NULL;
    this->BulletBurntMaterial = NULL;
    this->PathfinderDanger = false;
    this->PathfinderPreventSpawning = false;
    this->ScannerMaterial = NULL;
}

