#include "OverclockShematicItem.h"

UOverclockShematicItem::UOverclockShematicItem() {
    this->OwningItem = NULL;
    this->Overclock = NULL;
}

UUpgradableGearComponent* UOverclockShematicItem::GetOwningGearComponent() const {
    return NULL;
}


