#include "ResourcePouch.h"

class AActor;

void AResourcePouch::ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

AResourcePouch::AResourcePouch() {
    this->ImpactGroundSound = NULL;
}

