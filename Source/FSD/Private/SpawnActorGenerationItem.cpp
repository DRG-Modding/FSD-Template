#include "SpawnActorGenerationItem.h"
#include "Components/BoxComponent.h"

ASpawnActorGenerationItem::ASpawnActorGenerationItem() {
    this->ActorToSpawn = NULL;
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
}

