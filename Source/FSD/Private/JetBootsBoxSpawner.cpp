#include "JetBootsBoxSpawner.h"

AJetBootsBoxSpawner::AJetBootsBoxSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->MaxSpawnLocationTries = 10;
    this->DebrisPositioning = NULL;
    this->terrainPlacement = NULL;
    this->JetBootsBoxInstance = NULL;
    this->JetBootsBoxClassLoaded = NULL;
}


