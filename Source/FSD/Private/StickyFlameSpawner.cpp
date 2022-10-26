#include "StickyFlameSpawner.h"

bool UStickyFlameSpawner::TrySpawnStickyFlameHit(const FHitResult& Hit) {
    return false;
}

bool UStickyFlameSpawner::TrySpawnStickyFlame(FVector Location, FVector Normal) {
    return false;
}

void UStickyFlameSpawner::ServerSpawnStickyFlame_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal) {
}

UStickyFlameSpawner::UStickyFlameSpawner() {
    this->StickyFlameActor = NULL;
    this->FlameLifetime = 2.00f;
    this->StickyFlameIntervals = 2.00f;
    this->StickyMaxSpawnPerSecond = 50.00f;
    this->StickyFlameMinDistance = 50.00f;
    this->StickyFlameLastTime = 0.00f;
}

