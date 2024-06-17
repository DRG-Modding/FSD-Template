#include "FlameWallProjectile.h"
#include "Net/UnrealNetwork.h"

AFlameWallProjectile::AFlameWallProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SegmentParticleClass = NULL;
    this->SegmentDropClass = NULL;
    this->SegmentCount = 0;
    this->WallWidth = 250.00f;
    this->WallDepth = 250.00f;
    this->ImpactClass = NULL;
    this->OnlyImpactActorOnce = true;
    this->StickyFlameSpawner = NULL;
}

void AFlameWallProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlameWallProjectile, initialLocation);
}


