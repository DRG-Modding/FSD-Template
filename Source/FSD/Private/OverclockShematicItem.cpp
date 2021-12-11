#include "OverclockShematicItem.h"

class UUpgradableGearComponent;

UUpgradableGearComponent* UOverclockShematicItem::GetOwningGearComponent() const {
    return NULL;
}

UOverclockShematicItem::UOverclockShematicItem() {
    this->OwningItem = NULL;
    this->Overclock = NULL;
}

