#pragma once
#include "CoreMinimal.h"
#include "Craftable.h"
#include "SavablePrimaryDataAsset.h"
#include "Aquisitionable.h"
#include "RefundableInterface.h"
#include "EVanitySlot.h"
#include "CraftingCost.h"
#include "VanityEventSource.h"
#include "VanityItem.generated.h"

class UResourceData;
class UObject;
class UItemAquisitionBase;
class UIconGenerationCameraKey;
class APlayerCharacter;
class UVanityEventSourceDataAsset;
class UDLCBase;
class UPlayerCharacterID;
class AFSDPlayerState;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UVanityItem : public USavablePrimaryDataAsset, public ICraftable, public IRefundableInterface, public IAquisitionable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NotesInternal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPartOfRandomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemAquisitionBase* Aquisition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanityEventSourceDataAsset* EventSourceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIconGenerationCameraKey* IconGenerationCameraKey;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLCBase* RequiredDLC;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLCBase* CraftingRestrictionDLC;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CraftingPlayerRankRequired;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, float> CraftingCost;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CraftingCreditsCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UPlayerCharacterID*> RestrictToCharacters;
    
public:
    UVanityItem();
    UFUNCTION(BlueprintCallable)
    bool RemoveFromOwned(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PreviewItem(AFSDPlayerState* PlayerState, bool Show) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwned(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipped(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEventSource() const;
    
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
    UTexture* GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCraftingCost GetFashioniteCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVanityEventSource GetEventSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCraftingCreditsCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCraftableName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCraftableDescription() const;
    
    UFUNCTION(BlueprintCallable)
    void FixupAquisitionLogic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CraftItemWithFashionite(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CraftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCraftWithFashionite(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCraft(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyItemPermanently(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyItem(APlayerCharacter* Player, bool isPermanent) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

