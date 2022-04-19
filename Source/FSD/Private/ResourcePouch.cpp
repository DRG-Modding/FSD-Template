#include "ResourcePouch.h"
#include "CarriableInstantUsable.h"

class AActor;

void AResourcePouch::ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

AResourcePouch::AResourcePouch() {
    this->Usable = CreateDefaultSubobject<UCarriableInstantUsable>(TEXT("Usable"));
    this->ImpactGroundSound = NULL;
}

