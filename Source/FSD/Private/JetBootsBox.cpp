#include "JetBootsBox.h"
#include "TerrainPlacementComponent.h"

AJetBootsBox::AJetBootsBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UTerrainPlacementComponent>(TEXT("terrainPlacement"));
    this->terrainPlacement = (UTerrainPlacementComponent*)RootComponent;
    this->SpecialEvent = NULL;
}


