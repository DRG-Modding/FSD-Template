#include "Schematic.h"

class USchematicItem;
class UObject;
class UResourceData;
class UTexture;

void USchematic::SetCraftingMaterialCost() {
}

void USchematic::SetCostLocked(bool IsLocked) {
}

bool USchematic::HasBeenForged(UObject* WorldContext) const {
    return false;
}

bool USchematic::HasBeenAwardedOrForged(UObject* WorldContext) const {
    return false;
}

bool USchematic::HasBeenAwarded(UObject* WorldContext) const {
    return false;
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

