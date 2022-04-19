#include "DebrisStaticMesh.h"

FDebrisStaticMesh::FDebrisStaticMesh() {
    this->Mesh = NULL;
    this->Material = NULL;
    this->CollisionProfile = EDebrisMeshCollisionProfile::NoCollision;
    this->Probablity = 0.00f;
    this->DestroyedSound = NULL;
    this->DestroyedParticles = NULL;
    this->Fragile = false;
    this->CastShadows = EDebrisMeshShadows::Never;
    this->Durable = false;
    this->SpawnWhenCarving = false;
    this->OnlySpawnWhenCarving = false;
}

