#include "CaveEntranceComponent.h"

UCaveEntranceComponent::UCaveEntranceComponent() {
    this->Direction = ECaveEntranceType::EntranceAndExit;
    this->Priority = ECaveEntrancePriority::Primary;
}

