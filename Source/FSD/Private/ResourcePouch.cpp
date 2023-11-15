#include "ResourcePouch.h"
#include "CarriableInstantUsable.h"

AResourcePouch::AResourcePouch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Usable = CreateDefaultSubobject<UCarriableInstantUsable>(TEXT("Usable"));
    this->ImpactGroundSound = NULL;
}

void AResourcePouch::ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


