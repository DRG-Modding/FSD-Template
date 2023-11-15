#include "PickaxePart.h"

UPickaxePart::UPickaxePart() {
    this->Aquisition = NULL;
    this->Item = NULL;
}

bool UPickaxePart::GetUnlockedFromStart() const {
    return false;
}

EPickaxePartLocation UPickaxePart::GetPrefferedLocation() const {
    return EPickaxePartLocation::Head;
}


