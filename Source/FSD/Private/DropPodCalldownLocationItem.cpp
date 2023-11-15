#include "DropPodCalldownLocationItem.h"
#include "Components/SphereComponent.h"

ADropPodCalldownLocationItem::ADropPodCalldownLocationItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("collider"));
    this->CalldownClass = NULL;
}


