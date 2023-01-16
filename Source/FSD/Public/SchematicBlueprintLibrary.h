#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SchematicBlueprintLibrary.generated.h"

class UObject;
class UItemUpgrade;
class UItemSkinSchematicCollection;
class UPlayerCharacterID;
class USchematicCategory;
class USchematic;

UCLASS(Blueprintable)
class USchematicBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USchematicBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void PriceSchematics(const TSet<USchematic*>& Schematics);
    
    UFUNCTION(BlueprintCallable)
    static void PriceAllSchematics(bool lockPrices);
    
    UFUNCTION(BlueprintCallable)
    static void LockSchematics(const TSet<USchematic*>& Schematics);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasAnyUnlockableSchematics(UObject* WorldContextObject, UPlayerCharacterID* characterID, TSet<USchematicCategory*>& Categories);
    
    UFUNCTION(BlueprintCallable)
    static USchematicCategory* FindItemUpgradeSchematicCategory(UItemUpgrade* Upgrade);
    
    UFUNCTION(BlueprintCallable)
    static void AddSkinSchematicCollectionToSettings(UItemSkinSchematicCollection* Collection);
    
};

