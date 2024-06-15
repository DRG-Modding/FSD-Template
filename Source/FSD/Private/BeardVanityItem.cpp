#include "BeardVanityItem.h"

UBeardVanityItem::UBeardVanityItem() {
    this->BeardThickness = 0.00f;
    this->RequiresSlimArmor = false;
    this->MaterialType = EMaterialChoice::HairColor;
    this->HideEyebrows = false;
    this->HideSideburns = false;
    this->HideMoustache = false;
    this->HideAll = false;
}


