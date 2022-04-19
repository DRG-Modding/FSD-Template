#include "SpawnResourceGenerationItem.h"
#include "Components/SphereComponent.h"

ASpawnResourceGenerationItem::ASpawnResourceGenerationItem() {
    this->Resource = NULL;
    this->BaseAmount = 0.00f;
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
}

