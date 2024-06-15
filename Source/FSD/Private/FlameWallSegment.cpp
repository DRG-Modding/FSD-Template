#include "FlameWallSegment.h"
#include "Components/SphereComponent.h"

AFlameWallSegment::AFlameWallSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->StickyFlameSpawner = NULL;
}


void AFlameWallSegment::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


