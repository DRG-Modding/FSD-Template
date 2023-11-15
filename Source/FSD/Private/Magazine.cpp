#include "Magazine.h"

AMagazine::AMagazine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ImpactGroundSound = NULL;
}


void AMagazine::ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


