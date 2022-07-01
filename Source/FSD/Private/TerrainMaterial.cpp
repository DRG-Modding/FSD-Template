#include "TerrainMaterial.h"

class UObject;
class UMaterialInstance;
class UFXSystemComponent;

UFXSystemComponent* UTerrainMaterial::SpawnPartialDigParticles(UObject* WorldContextObject, FVector Location, FRotator Rotation) const {
    return NULL;
}

UFXSystemComponent* UTerrainMaterial::SpawnDigParticles(UObject* WorldContextObject, FVector Location, FRotator Rotation, float Density) const {
    return NULL;
}

bool UTerrainMaterial::IsPrecious() const {
    return false;
}

UMaterialInstance* UTerrainMaterial::GetObjectMaterial() const {
    return NULL;
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
    this->CanHaveDecals = true;
    this->PickAxeDigSize = 105.00f;
    this->RemoveDebrisOnFirstHit = true;
    this->ShoutLookAt = NULL;
    this->ShoutOnDig = NULL;
    this->TerrainType = NULL;
    this->Precious = false;
}

