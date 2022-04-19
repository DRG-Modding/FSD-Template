#include "Maggot.h"
#include "SimpleHealthComponent.h"

AMaggot::AMaggot() {
    this->HealthComponent = CreateDefaultSubobject<USimpleHealthComponent>(TEXT("HealthComponent"));
}

