#include "CaveEntrance.h"
#include "CaveEntranceComponent.h"

ACaveEntrance::ACaveEntrance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCaveEntranceComponent>(TEXT("CaveEntrance"));
    this->CaveEntranceComponent = (UCaveEntranceComponent*)RootComponent;
    this->EntranceType = ECaveEntranceType::EntranceAndExit;
    this->HasBeenConverted = false;
}


