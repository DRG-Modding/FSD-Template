#include "FlameWallSegment.h"
#include "Components/SphereComponent.h"

AFlameWallSegment::AFlameWallSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
}


