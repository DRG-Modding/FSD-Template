#include "PillarGenerationItem.h"
#include "PillarGenerationComponent.h"

APillarGenerationItem::APillarGenerationItem() {
    this->PillarComponent = CreateDefaultSubobject<UPillarGenerationComponent>(TEXT("BoxComponent"));
}

