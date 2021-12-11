#pragma once
#include "CoreMinimal.h"
#include "SavablePrimaryDataAsset.h"
#include "EItemSkinType.h"
#include "ItemSkin.generated.h"

class UMaterialInterface;
class UItemSkin;
class UDLCBase;
class UItemID;
class UItemSkinSet;
class USkinEffect;
class UPlayerCharacterID;
class UObject;
class AFSDPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemSkinOnSkinEquipped, const UItemSkin*, Skin);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemSkinOnSkinUnlocked, UItemSkin*, Skin);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemSkinOnSkinUnequipped, const UItemSkin*, Skin);

UCLASS(BlueprintType, EditInlineNew)
class FSD_API UItemSkin : public USavablePrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, Transient)
    FItemSkinOnSkinUnlocked OnSkinUnlocked;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FItemSkinOnSkinEquipped OnSkinEquipped;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FItemSkinOnSkinUnequipped OnSkinUnequipped;
    
protected:
    UPROPERTY(EditAnywhere)
    bool UnlockedFromStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDLCBase* RequiredDLC;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EItemSkinType SkinType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SkinName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemSkinSet* SkinSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* SkinIconMaterial;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<USkinEffect*> SkinEffects;
    
    UPROPERTY(EditAnywhere)
    UItemID* OwningItem;
    
    UPROPERTY(EditAnywhere)
    UPlayerCharacterID* OwningCharacter;
    
public:
    UFUNCTION(BlueprintCallable)
    bool Unlock(UObject* WorldContext, UItemID* ItemID, bool broadcast);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Receive_SkinItem(UObject* Skinnable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked(UObject* WorldContext, UItemID* skinnableID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquippedOnItem(UItemID* ItemID, AFSDPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemID* GetOwningItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterID* GetOwningCharacter() const;
    
    UItemSkin();
};

