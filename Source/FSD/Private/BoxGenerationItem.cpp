#include "BoxGenerationItem.h"
#include "BoxGenerationComponent.h"

ABoxGenerationItem::ABoxGenerationItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxGenerationComponent>(TEXT("BoxComponent"));
}


