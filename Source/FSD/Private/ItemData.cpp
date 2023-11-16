#include "ItemData.h"
#include "Templates/SubclassOf.h"

UItemData::UItemData() {
    this->ItemID = NULL;
    this->IconLine = NULL;
    this->IconBG = NULL;
    this->IconDetailed = NULL;
    this->CreditCost = 0;
    this->RequiredCharacterLevel = 0;
}

UTexture2D* UItemData::GetPreviewImage(UObject* WorldContext) const {
    return NULL;
}

TSubclassOf<AActor> UItemData::GetPreviewActorClass() const {
    return NULL;
}

TArray<FCraftingCost> UItemData::GetCraftingCost() const {
    return TArray<FCraftingCost>();
}


