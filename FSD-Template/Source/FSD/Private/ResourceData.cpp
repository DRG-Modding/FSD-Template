#include "ResourceData.h"

class UObject;

float UResourceData::GetOwnedAmount(UObject* WorldContextObject) const {
    return 0.0f;
}

UResourceData::UResourceData() {
    this->Icon = NULL;
    this->BuyingPrice = 150;
    this->SellingPrice = 15;
    this->MinedMissionStat = NULL;
    this->IsCraftingMaterial = false;
    this->ForceShowOnEndScreen = false;
    this->AffectedByMutators = true;
    this->ScaleToMissionLength = true;
    this->ScaleToHazardLevel = true;
    this->ShowSeparatelyInEndScreen = false;
    this->IsWholeNumberResource = false;
    this->CreditValue = 0;
    this->XPValue = 1;
}

