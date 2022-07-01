#include "Schematic.h"

class UResourceData;
class UFSDSaveGame;
class USchematicItem;
class UObject;
class UTexture;

void USchematic::SetCraftingMaterialCost() {
}

void USchematic::SetCostLocked(bool IsLocked) {
}

void USchematic::ResetGivenReward(UFSDSaveGame* SaveGame) {
}

void USchematic::RemoveSchematicFromPlayerInventory(UObject* WorldContext) {
}

void USchematic::GiveRewardForFree(UFSDSaveGame* SaveGame) {
}

FText USchematic::GetTitle() const {
    return FText::GetEmpty();
}

ESchematicState USchematic::GetSchematicState(UObject* WorldContext) const {
    return ESchematicState::NotOwned;
}

USchematicItem* USchematic::GetSchematicItem() const {
    return NULL;
}

TMap<UResourceData*, int32> USchematic::GetResourceCost() const {
    return TMap<UResourceData*, int32>();
}

FColor USchematic::GetIconTint() const {
    return FColor{};
}

UTexture* USchematic::GetIcon(UObject* WorldContextObject) const {
    return NULL;
}

FText USchematic::GetDescription() const {
    return FText::GetEmpty();
}

bool USchematic::CanAffordSchematic(UObject* WorldContext) const {
    return false;
}

void USchematic::BuildSchematic(UObject* WorldContext) {
}

void USchematic::AddSchematicToPlayerInventory(UObject* WorldContext) {
}

USchematic::USchematic() {
    this->Category = NULL;
    this->PricingTier = NULL;
    this->Rarity = NULL;
    this->UsedByCharacter = NULL;
    this->Item = NULL;
    this->CostIsLocked = false;
}

