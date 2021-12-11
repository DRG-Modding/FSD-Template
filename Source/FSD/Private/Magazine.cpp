#include "Magazine.h"

class AActor;


void AMagazine::ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

AMagazine::AMagazine() {
    this->ImpactGroundSound = NULL;
}

