#include "TerrainScannerSplineMesh.h"

UTerrainScannerSplineMesh::UTerrainScannerSplineMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CastShadow = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->bVisibleAtBeginPlay = true;
    this->bHideOnDeath = true;
    this->bUseFogOfWar = false;
    this->bVisibleOnScanner = false;
}

void UTerrainScannerSplineMesh::SetVisibleOnScanner(bool InShowOnScanner) {
}

void UTerrainScannerSplineMesh::OnOwnerDeath(UHealthComponentBase* InHealthComponent) {
}


