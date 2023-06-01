#pragma once
#include "CoreMinimal.h"
#include "Aquisitionable.h"
#include "Craftable.h"
#include "CraftingCost.h"
#include "EVanitySlot.h"
#include "RefundableInterface.h"
#include "SavablePrimaryDataAsset.h"
#include "VanityEventSource.h"
#include "VanityItem.generated.h"

class AFSDPlayerState;
class APlayerCharacter;
class UCharacterVanityComponent;
class UIconGenerationCameraKey;
class UItemAquisitionBase;
class UObject;
class UPlayerCharacterID;
class UTexture;
class UVanityEventSourceDataAsset;

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemAquisitionBase* Aquisition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanityEventSourceDataAsset* EventSourceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIconGenerationCameraKey* IconGenerationCameraKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UPlayerCharacterID*> RestrictToCharacters;
    
public:
    UVanityItem();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool RemoveFromOwned(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PreviewItem(AFSDPlayerState* PlayerState, bool Show) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsOwned(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsEquipped(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEventSource() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    void CraftItemWithFashionite(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    void CraftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeToItem(UCharacterVanityComponent* Gear) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool CanCraftWithFashionite(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool CanCraft(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    void ApplyItemPermanently(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyItem(APlayerCharacter* Player, bool isPermanent) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

