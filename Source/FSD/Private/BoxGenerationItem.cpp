#include "BoxGenerationItem.h"
#include "BoxGenerationComponent.h"

ABoxGenerationItem::ABoxGenerationItem() {
    this->BoxComponent = CreateDefaultSubobject<UBoxGenerationComponent>(TEXT("BoxComponent"));
}

