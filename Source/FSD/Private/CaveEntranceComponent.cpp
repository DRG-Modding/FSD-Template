#include "CaveEntranceComponent.h"

UCaveEntranceComponent::UCaveEntranceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Direction = ECaveEntranceType::EntranceAndExit;
    this->Priority = ECaveEntrancePriority::Primary;
}


