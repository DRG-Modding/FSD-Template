#include "CaveEntrance.h"
#include "CaveEntranceComponent.h"

ACaveEntrance::ACaveEntrance() {
    this->CaveEntranceComponent = CreateDefaultSubobject<UCaveEntranceComponent>(TEXT("CaveEntrance"));
    this->EntranceType = ECaveEntranceType::EntranceAndExit;
    this->HasBeenConverted = false;
}

