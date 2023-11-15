#include "MULE.h"
#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "SimpleObjectInfoComponent.h"

AMULE::AMULE(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->ObjectInfo = CreateDefaultSubobject<USimpleObjectInfoComponent>(TEXT("ObjectInfo"));
    this->IsDown = false;
}

void AMULE::SetIsDown(bool NewIsDown) {
}



void AMULE::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMULE, IsDown);
}


