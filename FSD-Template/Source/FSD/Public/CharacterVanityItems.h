#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "EVanitySlot.h"
#include "CharacterVanityItems.generated.h"

class UVanitySchematicBank;
class UObject;
class UHeadVanityItem;
class UBeardVanityItem;
class UArmorVanityItem;
class UArmorMaterialVanityItem;
class UEyeBrowsVanityItem;
class UMoustacheVanityItem;
class USideburnsVanityItem;
class UBeardColorVanityItem;
class USkinColorVanityItem;
class UVanityItem;
class UPlayerCharacterID;

UCLASS(BlueprintType)
class FSD_API UCharacterVanityItems : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UHeadVanityItem*> HeadItems;
    
    UPROPERTY(EditAnywhere)
    UVanitySchematicBank* HeadSchematicBank;
    
    UPROPERTY(EditAnywhere)
    TArray<UBeardVanityItem*> BeardItems;
    
    UPROPERTY(EditAnywhere)
    UVanitySchematicBank* BeardSchematicBank;
    
    UPROPERTY(EditAnywhere)
    TArray<UArmorVanityItem*> ArmorItems;
    
    UPROPERTY(EditAnywhere)
    TArray<UArmorMaterialVanityItem*> ArmorMaterialItems;
    
    UPROPERTY(EditAnywhere)
    TArray<UArmorMaterialVanityItem*> ArmorMaterialItemsInTreassures;
    
    UPROPERTY(EditAnywhere)
    TArray<UEyeBrowsVanityItem*> EyebrowsItems;
    
    UPROPERTY(EditAnywhere)
    UVanitySchematicBank* EyebrowSchematicBank;
    
    UPROPERTY(EditAnywhere)
    TArray<UMoustacheVanityItem*> MoustacheItems;
    
    UPROPERTY(EditAnywhere)
    UVanitySchematicBank* MoustacheSchematicBank;
    
    UPROPERTY(EditAnywhere)
    TArray<USideburnsVanityItem*> SideburnItems;
    
    UPROPERTY(EditAnywhere)
    UVanitySchematicBank* SideburnSchematicBank;
    
    UPROPERTY(EditAnywhere)
    TArray<UBeardColorVanityItem*> BeardMaterialItems;
    
    UPROPERTY(EditAnywhere)
    UVanitySchematicBank* BeardMaterialSchematicBank;
    
    UPROPERTY(EditAnywhere)
    TArray<USkinColorVanityItem*> SkinMaterialItems;
    
    UPROPERTY(EditAnywhere)
    UVanitySchematicBank* SkinMaterialSchematicBank;
    
    UPROPERTY(Transient)
    TMap<FGuid, UVanityItem*> VanityMap;
    
    UPROPERTY(EditAnywhere)
    TMap<EVanitySlot, UVanityItem*> DefaultItems;
    
public:
    UFUNCTION(BlueprintCallable)
    static void SortVanityItems(UObject* WorldContextObject, UPlayerCharacterID* characterID, UPARAM(Ref) TArray<UVanityItem*>& vanityItems);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UVanityItem*> GetVanityItems(UObject* WorldContextObject, EVanitySlot Slot, bool onlyStoreItems, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVanityItem* GetVanityItem(const FGuid& VanityID) const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<UVanityItem*> GetUnLockedVanityItems(UObject* WorldContextObject, EVanitySlot Slot, bool onlyStoreItems, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UVanityItem*> GetLockedVanityItems(UObject* WorldContextObject, EVanitySlot Slot, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UVanityItem*> GetItems(EVanitySlot Slot, bool onlyStoreItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVanityItem* GetDefaultVanityItem(UObject* WorldContext, EVanitySlot Slot, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable)
    void Clean();
    
    UCharacterVanityItems();
};

