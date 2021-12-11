#include "TerrainScannerStaticMesh.h"

class UHealthComponentBase;

void UTerrainScannerStaticMesh::SetVisibleOnScanner(bool InShowOnScanner) {
}

void UTerrainScannerStaticMesh::OnOwnerDeath(UHealthComponentBase* InHealthComponent) {
}

UTerrainScannerStaticMesh::UTerrainScannerStaticMesh() {
    this->bVisibleAtBeginPlay = true;
    this->bHideOnDeath = true;
    this->bUseFogOfWar = false;
    this->bVisibleOnScanner = false;
}

