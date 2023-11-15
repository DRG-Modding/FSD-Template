#include "Maggot.h"
#include "SimpleHealthComponent.h"

AMaggot::AMaggot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthComponent = CreateDefaultSubobject<USimpleHealthComponent>(TEXT("HealthComponent"));
}


