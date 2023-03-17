#include "TerrainScannerSplineMesh.h"

void UTerrainScannerSplineMesh::SetVisibleOnScanner(bool InShowOnScanner) {
}

void UTerrainScannerSplineMesh::OnOwnerDeath(UHealthComponentBase* InHealthComponent) {
}

UTerrainScannerSplineMesh::UTerrainScannerSplineMesh() {
    this->bVisibleAtBeginPlay = true;
    this->bHideOnDeath = true;
    this->bUseFogOfWar = false;
    this->bVisibleOnScanner = false;
}

