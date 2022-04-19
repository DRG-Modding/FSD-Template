#include "DroneCharacter.h"
#include "HealthComponent.h"
#include "OutlineComponent.h"
#include "SimpleObjectInfoComponent.h"

ADroneCharacter::ADroneCharacter() {
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->OutlineComponent = CreateDefaultSubobject<UOutlineComponent>(TEXT("OutlineComponent"));
    this->ObjectInfo = CreateDefaultSubobject<USimpleObjectInfoComponent>(TEXT("ObjectInfo"));
}

