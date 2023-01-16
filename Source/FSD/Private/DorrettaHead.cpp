#include "DorrettaHead.h"
#include "CarriableComponent.h"
#include "CarriableInstantUsable.h"

ADorrettaHead::ADorrettaHead() {
    this->Usable = CreateDefaultSubobject<UCarriableInstantUsable>(TEXT("Usable"));
    this->CarriableComponent = CreateDefaultSubobject<UCarriableComponent>(TEXT("CarriableComponent"));
}

