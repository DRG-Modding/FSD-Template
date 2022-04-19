#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "EVanitySlot.h"
#include "CharacterVanityItems.generated.h"

class UEyeBrowsVanityItem;
class UHeadVanityItem;
class UVanitySchematicBank;
class UBeardVanityItem;
class UArmorVanityItem;
class UMoustacheVanityItem;
class UArmorMaterialVanityItem;
class USideburnsVanityItem;
class UBeardColorVanityItem;
class USkinColorVanityItem;
class UVanityItem;
class UPlayerCharacterID;
class UObject;

UCLASS(BlueprintType)
class FSD_API UCharacterVanityItems : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHeadVanityItem*> HeadItems;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySchematicBank* HeadSchematicBank;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBeardVanityItem*> BeardItems;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySchematicBank* BeardSchematicBank;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UArmorVanityItem*> ArmorItems;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UArmorMaterialVanityItem*> ArmorMaterialItems;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UArmorMaterialVanityItem*> ArmorMaterialItemsInTreassures;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEyeBrowsVanityItem*> EyebrowsItems;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySchematicBank* EyebrowSchematicBank;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMoustacheVanityItem*> MoustacheItems;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySchematicBank* MoustacheSchematicBank;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USideburnsVanityItem*> SideburnItems;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySchematicBank* SideburnSchematicBank;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBeardColorVanityItem*> BeardMaterialItems;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySchematicBank* BeardMaterialSchematicBank;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkinColorVanityItem*> SkinMaterialItems;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySchematicBank* SkinMaterialSchematicBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVanitySlot, UVanityItem*> DefaultItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* OwningCharacter;
    
public:
    UCharacterVanityItems();
    UFUNCTION(BlueprintCallable)
    static void SortVanityItems(UObject* WorldContextObject, UPlayerCharacterID* characterID, UPARAM(Ref) TArray<UVanityItem*>& VanityItems);
    
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
    
};

