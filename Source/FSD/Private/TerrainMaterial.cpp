#include "TerrainMaterial.h"

void UTerrainMaterial::TestMaterialEffects(UTerrainMaterial* Material, TArray<FTestTerrainMaterialItem>& Items) {
}

void UTerrainMaterial::TestDecals(UTerrainMaterial* Material, TArray<FTestTerrainMaterialDecalItem>& Items) {
}

UFXSystemComponent* UTerrainMaterial::SpawnPartialDigParticles(UObject* WorldContextObject, FVector Location, FRotator Rotation) const {
    return NULL;
}

UFXSystemComponent* UTerrainMaterial::SpawnDigParticles(UObject* WorldContextObject, FVector Location, FRotator Rotation, float Density) const {
    return NULL;
}

bool UTerrainMaterial::IsPrecious() const {
    return false;
}

FText UTerrainMaterial::GetInGameName() const {
    return FText::GetEmpty();
}

UMaterialInstance* UTerrainMaterial::GetDigParticlesMaterialOverride() const {
    return NULL;
}

UTerrainMaterial::UTerrainMaterial() {
    this->Collide = false;
    this->Diggable = false;
    this->CanBeDrilled = true;
    this->ExplosionProof = false;
    this->MeltsInFire = false;
    this->PlatformDissolvable = false;
    this->ResourceData = NULL;
    this->HitsNeededToMine = 2;
    this->PickAxeDigSize = 105.00f;
    this->RemoveDebrisOnFirstHit = true;
    this->ShoutLookAt = NULL;
    this->ShoutOnDig = NULL;
    this->TerrainType = NULL;
    this->Precious = false;
}

