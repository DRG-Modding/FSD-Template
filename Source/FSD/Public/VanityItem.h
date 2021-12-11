#pragma once
#include "CoreMinimal.h"
#include "SavablePrimaryDataAsset.h"
#include "Craftable.h"
#include "RefundableInterface.h"
#include "EVanitySlot.h"
#include "CraftingCost.h"
#include "VanityItem.generated.h"

class UDLCBase;
class UTexture2D;
class UVanityItem;
class UIconGenerationCameraKey;
class UResourceData;
class UPlayerCharacterID;
class UObject;
class AFSDPlayerState;
class UTexture;
class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVanityItemOnUnlockFlagChanged, UVanityItem*, Item, bool, IsUnlockFlagged);

UCLASS(BlueprintType, EditInlineNew)
class FSD_API UVanityItem : public USavablePrimaryDataAsset, public ICraftable, public IRefundableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FVanityItemOnUnlockFlagChanged OnUnlockFlagChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    int32 SortingPriority;
    
    UPROPERTY(EditAnywhere)
    FText ItemName;
    
    UPROPERTY(EditAnywhere)
    FText ItemDescription;
    
    UPROPERTY(EditAnywhere)
    FString NotesInternal;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsPartOfRandomization;
    
    UPROPERTY(EditAnywhere)
    UIconGenerationCameraKey* IconGenerationCameraKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDLCBase* RequiredDLC;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDLCBase* CraftingRestrictionDLC;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bUnLockedFlag;
    
    UPROPERTY(VisibleAnywhere)
    int32 CraftingPlayerRankRequired;
    
    UPROPERTY(VisibleAnywhere)
    TMap<UResourceData*, float> CraftingCost;
    
    UPROPERTY(VisibleAnywhere)
    int32 CraftingCreditsCost;
    
    UPROPERTY(EditAnywhere)
    TSet<UPlayerCharacterID*> RestrictToCharacters;
    
public:
    UFUNCTION(BlueprintCallable)
    bool RemoveFromOwned(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PreviewItem(AFSDPlayerState* PlayerState, bool Show) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void MarkAsUnLocked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwned(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipped(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable)
    void GiftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVanitySlot GetVanitySlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCraftingCost> GetResourceCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredPlayerRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUnLockedFromStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetIcon(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCraftingCreditsCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCraftableName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetCraftableIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCraftableDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CraftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearUnLockedMark();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCraft(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyItemPermanently(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyItem(APlayerCharacter* Player, bool isPermanent) const;
    
    UVanityItem();
    
    // Fix for true pure virtual functions not being implemented
};

