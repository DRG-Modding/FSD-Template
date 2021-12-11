#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "ESchematicState.h"
#include "Schematic.generated.h"

class USchematic;
class USchematicCategory;
class USchematicPricingTier;
class USchematicRarity;
class UResourceData;
class UPlayerCharacterID;
class UObject;
class USchematicItem;
class UTexture;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSchematicOnSchematicAddedToInventory, USchematic*, Schematic);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSchematicOnSchematicReset, USchematic*, Schematic);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSchematicOnSchematicBuilt, USchematic*, Schematic);

UCLASS(EditInlineNew)
class FSD_API USchematic : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSchematicOnSchematicAddedToInventory OnSchematicAddedToInventory;
    
    UPROPERTY(BlueprintAssignable)
    FSchematicOnSchematicReset OnSchematicReset;
    
    UPROPERTY(BlueprintAssignable)
    FSchematicOnSchematicBuilt OnSchematicBuilt;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USchematicCategory* Category;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USchematicPricingTier* PricingTier;
    
    UPROPERTY(EditAnywhere)
    USchematicRarity* Rarity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* UsedByCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USchematicItem* Item;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<UResourceData*, int32> CraftingCost;
    
    UPROPERTY(EditAnywhere)
    bool CostIsLocked;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCraftingMaterialCost();
    
    UFUNCTION(BlueprintCallable)
    void SetCostLocked(bool IsLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenForged(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenAwardedOrForged(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenAwarded(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESchematicState GetSchematicState(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USchematicItem* GetSchematicItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UResourceData*, int32> GetResourceCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetIconTint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetIcon(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAffordSchematic(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable)
    void BuildSchematic(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void AddSchematicToPlayerInventory(UObject* WorldContext);
    
    USchematic();
};

