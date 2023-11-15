#include "RandomSelectorItem.h"
#include "Components/SphereComponent.h"

ARandomSelectorItem::ARandomSelectorItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
    this->Min = 0;
    this->Max = 0;
}


