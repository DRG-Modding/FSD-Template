#include "SchematicBlueprintLibrary.h"

USchematicBlueprintLibrary::USchematicBlueprintLibrary() {
}

void USchematicBlueprintLibrary::PriceSchematics(const TSet<USchematic*>& Schematics) {
}

void USchematicBlueprintLibrary::PriceAllSchematics(bool lockPrices) {
}

void USchematicBlueprintLibrary::LockSchematics(const TSet<USchematic*>& Schematics) {
}

bool USchematicBlueprintLibrary::HasAnyUnlockableSchematics(UObject* WorldContextObject, UPlayerCharacterID* characterID, TSet<USchematicCategory*>& Categories) {
    return false;
}

USchematicCategory* USchematicBlueprintLibrary::FindItemUpgradeSchematicCategory(UItemUpgrade* Upgrade) {
    return NULL;
}


