#include "GenerateIconInfo.h"

FGenerateIconInfo::FGenerateIconInfo() {
    this->IconType = EGeneratorIconType::Vanity;
    this->PickaxePart = NULL;
    this->PickaxePartLocation = EPickaxePartLocation::Head;
    this->ItemSkin = NULL;
    this->Item = NULL;
    this->Character = NULL;
    this->bShowCloseUp = false;
}

