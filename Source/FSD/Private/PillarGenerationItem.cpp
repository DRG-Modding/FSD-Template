#include "PillarGenerationItem.h"
#include "PillarGenerationComponent.h"

APillarGenerationItem::APillarGenerationItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PillarComponent = CreateDefaultSubobject<UPillarGenerationComponent>(TEXT("BoxComponent"));
}


