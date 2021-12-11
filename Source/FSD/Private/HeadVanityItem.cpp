#include "HeadVanityItem.h"

UHeadVanityItem::UHeadVanityItem() {
    this->HeadVanityType = EHeadVanityType::HairOnly;
    this->HideEyebrows = false;
    this->HideSideburns = false;
    this->HideMoustache = false;
    this->HideBeard = false;
    this->HideAll = false;
    this->HideHead = false;
    this->HeadMesh = ECharacterHeadMesh::Full;
}

