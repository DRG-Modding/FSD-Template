#include "ResourceData.h"

class UObject;

float UResourceData::GetOwnedAmount(UObject* WorldContextObject) const {
    return 0.0f;
}

bool UResourceData::GetIsTradableCraftingMaterial() const {
    return false;
}

UResourceData::UResourceData() {
    this->Icon = NULL;
    this->BuyingPrice = 150;
    this->SellingPrice = 15;
    this->MinedMissionStat = NULL;
    this->IsCraftingMaterial = false;
    this->IsTradable = true;
    this->ForceShowOnEndScreen = false;
    this->AffectedByMutators = true;
    this->ScaleToMissionLength = true;
    this->ScaleToHazardLevel = true;
    this->ShowSeparatelyInEndScreen = false;
    this->IsWholeNumberResource = false;
    this->CreditValue = 0;
    this->XPValue = 1;
}

