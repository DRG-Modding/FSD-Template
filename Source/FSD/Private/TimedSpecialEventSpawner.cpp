#include "TimedSpecialEventSpawner.h"

UTimedSpecialEventSpawner::UTimedSpecialEventSpawner() {
    this->MinTime = 0.00f;
    this->MaxTime = 1.00f;
}

void UTimedSpecialEventSpawner::UnblockEventSpawn(UObject* blocker) {
}

void UTimedSpecialEventSpawner::SpawnEvent() const {
}

void UTimedSpecialEventSpawner::BlockEventSpawn(UObject* blocker) {
}

bool UTimedSpecialEventSpawner::AreEventSpawnsBlocked() const {
    return false;
}


