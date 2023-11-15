#include "DorrettaHead.h"
#include "CarriableComponent.h"
#include "CarriableInstantUsable.h"

ADorrettaHead::ADorrettaHead(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Usable = CreateDefaultSubobject<UCarriableInstantUsable>(TEXT("Usable"));
    this->CarriableComponent = CreateDefaultSubobject<UCarriableComponent>(TEXT("CarriableComponent"));
}


