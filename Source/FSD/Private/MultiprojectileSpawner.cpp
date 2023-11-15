#include "MultiprojectileSpawner.h"

UMultiprojectileSpawner::UMultiprojectileSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectilesIgnoreEachOther = false;
}

bool UMultiprojectileSpawner::GetIsFiring() const {
    return false;
}

void UMultiprojectileSpawner::Fire(const FVector& Velocity, const FVector& Origin) {
}

UMultiprojectileSpawner* UMultiprojectileSpawner::FindMultiProjectileSpawner(AActor* Actor, UDataAsset* RangedAttack) {
    return NULL;
}


