#include "SpawnActorGenerationItem.h"
#include "Components/BoxComponent.h"

ASpawnActorGenerationItem::ASpawnActorGenerationItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
    this->ActorToSpawn = NULL;
    this->Box = (UBoxComponent*)RootComponent;
}


