#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "EVanitySlot.h"
#include "CharacterVanityItems.generated.h"

class UObject;
class UPlayerCharacterID;
class UVanityItem;

UCLASS(Blueprintable)
class UCharacterVanityItems : public UDataAsset {
    GENERATED_BODY()
public:
protected:
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesVanitySlotAllowStyleTags(EVanitySlot Slot);
    
};

