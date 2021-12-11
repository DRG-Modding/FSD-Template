#include "SchematicBlueprintLibrary.h"

class UObject;
class UItemSkinSchematicCollection;
class USchematic;
class UPlayerCharacterID;
class USchematicCategory;
class UItemUpgrade;

void USchematicBlueprintLibrary::PriceAllSchematics(bool lockPrices) {
}

bool USchematicBlueprintLibrary::IsSchematicOwnedOrForged(UObject* WorldContextObject, USchematic* Schematic) {
    return false;
}

bool USchematicBlueprintLibrary::IsSchematicOwned(UObject* WorldContextObject, USchematic* Schematic) {
    return false;
}

bool USchematicBlueprintLibrary::IsSchematicForged(UObject* WorldContextObject, USchematic* Schematic) {
    return false;
}

bool USchematicBlueprintLibrary::HasAnyUnlockableSchematics(UObject* WorldContextObject, UPlayerCharacterID* characterID, TSet<USchematicCategory*>& Categories) {
    return false;
}

TArray<USchematic*> USchematicBlueprintLibrary::GetRewardableSchematics(UObject* WorldContextObject, UPlayerCharacterID* characterID, USchematicCategory* Category) {
    return TArray<USchematic*>();
}

TArray<USchematic*> USchematicBlueprintLibrary::GetForgedSchematic(UObject* WorldContextObject) {
    return TArray<USchematic*>();
}

USchematicCategory* USchematicBlueprintLibrary::FindItemUpgradeSchematicCategory(UItemUpgrade* Upgrade) {
    return NULL;
}

void USchematicBlueprintLibrary::AddSkinSchematicCollectionToSettings(UItemSkinSchematicCollection* Collection) {
}

USchematicBlueprintLibrary::USchematicBlueprintLibrary() {
}

