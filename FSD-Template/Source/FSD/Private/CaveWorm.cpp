#include "CaveWorm.h"

class UObject;
class UResourceData;
class UHealthComponentBase;
class AResourceChunk;

AResourceChunk* ACaveWorm::SpawnResource(UObject* WorldContext, UResourceData* Data, float Size, FTransform Transform, FVector Impulse, FVector DropOffset) {
    return NULL;
}

void ACaveWorm::Search() {
}

void ACaveWorm::IncrementKillCount(UHealthComponentBase* HealthComponent) {
}

void ACaveWorm::DropResource(UResourceData* Data, float Size, FVector Impulse, FVector DropOffset) {
}

ACaveWorm::ACaveWorm() {
    this->SearchChunksRadius = -1.00f;
    this->SearchChunksInterval = -1.00f;
}

