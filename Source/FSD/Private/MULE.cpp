#include "MULE.h"
#include "Net/UnrealNetwork.h"
#include "HealthComponent.h"
#include "SimpleObjectInfoComponent.h"

void AMULE::SetIsDown(bool NewIsDown) {
}



void AMULE::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMULE, IsDown);
}

AMULE::AMULE() {
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->ObjectInfo = CreateDefaultSubobject<USimpleObjectInfoComponent>(TEXT("ObjectInfo"));
    this->IsDown = false;
}

