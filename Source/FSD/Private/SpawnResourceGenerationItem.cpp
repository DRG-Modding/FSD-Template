#include "SpawnResourceGenerationItem.h"
#include "Components/SphereComponent.h"

ASpawnResourceGenerationItem::ASpawnResourceGenerationItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
    this->Resource = NULL;
    this->BaseAmount = 0.00f;
    this->Sphere = (USphereComponent*)RootComponent;
}


