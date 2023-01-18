#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESchematicState.h"
#include "SavableDataAsset.h"
#include "Schematic.generated.h"

class UFSDSaveGame;
class UObject;
class UPlayerCharacterID;
class UResourceData;
class USchematic;
class USchematicCategory;
class USchematicItem;
class USchematicPricingTier;
class USchematicRarity;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API USchematic : public USavableDataAsset {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSchematicDelegate, USchematic*, Schematic);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchematicDelegate OnSchematicAddedToInventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchematicDelegate OnSchematicReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchematicDelegate OnSchematicBuilt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicPricingTier* PricingTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicRarity* Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* UsedByCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USchematicItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, int32> CraftingCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CostIsLocked;
    
public:
    USchematic();
    UFUNCTION(BlueprintCallable)
    void SetCraftingMaterialCost();
    
    UFUNCTION(BlueprintCallable)
    void SetCostLocked(bool IsLocked);
    
    UFUNCTION(BlueprintCallable)
    void ResetGivenReward(UFSDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void RemoveSchematicFromPlayerInventory(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void GiveRewardForFree(UFSDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    ESchematicState GetSchematicState(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USchematicItem* GetSchematicItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UResourceData*, int32> GetResourceCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetIconTint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UTexture* GetIcon(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool CanAffordSchematic(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void BuildSchematic(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void AddSchematicToPlayerInventory(UObject* WorldContext);
    
};

