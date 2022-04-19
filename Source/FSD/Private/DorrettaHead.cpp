#include "DorrettaHead.h"
#include "CarriableInstantUsable.h"
#include "CarriableComponent.h"

ADorrettaHead::ADorrettaHead() {
    this->Usable = CreateDefaultSubobject<UCarriableInstantUsable>(TEXT("Usable"));
    this->CarriableComponent = CreateDefaultSubobject<UCarriableComponent>(TEXT("CarriableComponent"));
}

