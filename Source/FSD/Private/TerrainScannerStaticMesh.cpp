#include "TerrainScannerStaticMesh.h"

UTerrainScannerStaticMesh::UTerrainScannerStaticMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CastShadow = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->bVisibleAtBeginPlay = true;
    this->bHideOnDeath = true;
    this->bUseFogOfWar = false;
    this->bVisibleOnScanner = false;
}

void UTerrainScannerStaticMesh::SetVisibleOnScanner(bool InShowOnScanner) {
}

void UTerrainScannerStaticMesh::OnOwnerDeath(UHealthComponentBase* InHealthComponent) {
}


