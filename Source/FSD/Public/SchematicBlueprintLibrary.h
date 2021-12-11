#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SchematicBlueprintLibrary.generated.h"

class UItemUpgrade;
class UObject;
class UItemSkinSchematicCollection;
class USchematic;
class UPlayerCharacterID;
class USchematicCategory;

UCLASS(BlueprintType)
class USchematicBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void PriceAllSchematics(bool lockPrices);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSchematicOwnedOrForged(UObject* WorldContextObject, USchematic* Schematic);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSchematicOwned(UObject* WorldContextObject, USchematic* Schematic);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSchematicForged(UObject* WorldContextObject, USchematic* Schematic);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAnyUnlockableSchematics(UObject* WorldContextObject, UPlayerCharacterID* characterID, TSet<USchematicCategory*>& Categories);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USchematic*> GetRewardableSchematics(UObject* WorldContextObject, UPlayerCharacterID* characterID, USchematicCategory* Category);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USchematic*> GetForgedSchematic(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static USchematicCategory* FindItemUpgradeSchematicCategory(UItemUpgrade* Upgrade);
    
    UFUNCTION(BlueprintCallable)
    static void AddSkinSchematicCollectionToSettings(UItemSkinSchematicCollection* Collection);
    
    USchematicBlueprintLibrary();
};

