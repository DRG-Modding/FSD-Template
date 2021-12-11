#include "PickaxePart.h"

EPickaxePartLocation UPickaxePart::GetPrefferedLocation() const {
    return EPickaxePartLocation::Head;
}

UPickaxePart::UPickaxePart() {
    this->Item = NULL;
    this->AquisitionSource = NULL;
    this->UnlockedFromStart = false;
    this->RequiredDLC = NULL;
}

