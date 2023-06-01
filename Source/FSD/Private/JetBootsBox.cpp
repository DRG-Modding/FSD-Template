#include "JetBootsBox.h"
#include "TerrainPlacementComponent.h"

AJetBootsBox::AJetBootsBox() {
    this->terrainPlacement = CreateDefaultSubobject<UTerrainPlacementComponent>(TEXT("terrainPlacement"));
    this->SpecialEvent = NULL;
}

