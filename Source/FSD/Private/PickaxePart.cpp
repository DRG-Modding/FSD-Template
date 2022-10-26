#include "PickaxePart.h"

bool UPickaxePart::GetUnlockedFromStart() const {
    return false;
}

EPickaxePartLocation UPickaxePart::GetPrefferedLocation() const {
    return EPickaxePartLocation::Head;
}

UPickaxePart::UPickaxePart() {
    this->Aquisition = NULL;
    this->Item = NULL;
}

