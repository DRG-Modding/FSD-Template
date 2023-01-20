#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "EVanitySlot.h"
#include "CharacterVanityItems.generated.h"

class UArmorMaterialVanityItem;
class UArmorVanityItem;
class UBeardColorVanityItem;
class UBeardVanityItem;
class UEyeBrowsVanityItem;
class UHeadVanityItem;
class UMoustacheVanityItem;
class UObject;
class UPlayerCharacterID;
class USideburnsVanityItem;
class USkinColorVanityItem;
class UVanityItem;
class UVanitySchematicBank;

UCLASS(Blueprintable)
class UCharacterVanityItems : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHeadVanityItem*> HeadItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySchematicBank* HeadSchematicBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBeardVanityItem*> BeardItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySchematicBank* BeardSchematicBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UArmorVanityItem*> ArmorItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UArmorMaterialVanityItem*> ArmorMaterialItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UArmorMaterialVanityItem*> ArmorMaterialItemsInTreassures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEyeBrowsVanityItem*> EyebrowsItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySchematicBank* EyebrowSchematicBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMoustacheVanityItem*> MoustacheItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySchematicBank* MoustacheSchematicBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USideburnsVanityItem*> SideburnItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySchematicBank* SideburnSchematicBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBeardColorVanityItem*> BeardMaterialItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySchematicBank* BeardMaterialSchematicBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkinColorVanityItem*> SkinMaterialItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySchematicBank* SkinMaterialSchematicBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVanitySlot, UVanityItem*> DefaultItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* OwningCharacter;
    
public:
    UCharacterVanityItems();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SortVanityItems(UObject* WorldContextObject, UPlayerCharacterID* characterID, UPARAM(Ref) TArray<UVanityItem*>& VanityItems);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UVanityItem*> GetVanityItems(UObject* WorldContextObject, EVanitySlot Slot, bool onlyStoreItems, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVanityItem* GetVanityItem(const FGuid& VanityID) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UVanityItem*> GetUnLockedVanityItems(UObject* WorldContextObject, EVanitySlot Slot, bool onlyStoreItems, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UVanityItem*> GetLockedVanityItems(UObject* WorldContextObject, EVanitySlot Slot, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UVanityItem*> GetItems(EVanitySlot Slot, bool onlyStoreItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UVanityItem* GetDefaultVanityItem(UObject* WorldContext, EVanitySlot Slot, UPlayerCharacterID* characterID);
    
};

