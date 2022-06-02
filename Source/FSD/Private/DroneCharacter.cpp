#include "DroneCharacter.h"
#include "OutlineComponent.h"
#include "HealthComponent.h"
#include "SimpleObjectInfoComponent.h"

ADroneCharacter::ADroneCharacter() {
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->OutlineComponent = CreateDefaultSubobject<UOutlineComponent>(TEXT("OutlineComponent"));
    this->ObjectInfo = CreateDefaultSubobject<USimpleObjectInfoComponent>(TEXT("ObjectInfo"));
}

