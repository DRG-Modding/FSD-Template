#include "MultiprojectileSpawner.h"

class UDataAsset;
class AActor;
class UMultiprojectileSpawner;

bool UMultiprojectileSpawner::GetIsFiring() const {
    return false;
}

void UMultiprojectileSpawner::Fire(const FVector& Velocity, const FVector& Origin) {
}

UMultiprojectileSpawner* UMultiprojectileSpawner::FindMultiProjectileSpawner(AActor* Actor, UDataAsset* RangedAttack) {
    return NULL;
}

UMultiprojectileSpawner::UMultiprojectileSpawner() {
    this->ProjectilesIgnoreEachOther = false;
}

