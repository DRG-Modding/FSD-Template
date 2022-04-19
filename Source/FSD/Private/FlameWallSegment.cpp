#include "FlameWallSegment.h"
#include "Components/SphereComponent.h"

AFlameWallSegment::AFlameWallSegment() {
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
}

