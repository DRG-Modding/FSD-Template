#pragma once
#include "CoreMinimal.h"
#include "Aquisitionable.h"
#include "EItemSkinType.h"
#include "SavablePrimaryDataAsset.h"
#include "ItemSkin.generated.h"

class AFSDPlayerState;
class UDynamicIcon;
class UItemAquisitionBase;
class UItemID;
class UItemSkin;
class UItemSkinSet;
class UMaterialInstanceDynamic;
class UObject;
class UPlayerCharacterID;
class USkinEffect;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UItemSkin : public USavablePrimaryDataAsset, public IAquisitionable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemSkinSignature, UItemSkin*, Skin);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemSkinEquipSignature, const UItemSkin*, Skin);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemSkinSignature OnSkinUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemSkinEquipSignature OnSkinEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemSkinEquipSignature OnSkinUnequipped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemAquisitionBase* Aquisition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SkinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemSkinSet* SkinSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicIcon* DynamicIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinEffect* SkinEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* OwningItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* OwningCharacter;
    
public:
    UItemSkin();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Unlock(UObject* WorldContext, UItemID* ItemID, bool broadcast);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Receive_SkinItem(UObject* Skinnable) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void Lock(UObject* WorldContext, UItemID* ItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockedFromStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsLocked(UObject* WorldContext, UItemID* skinnableID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquippedOnItem(UItemID* ItemID, AFSDPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemSkinType GetSkinType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSkinName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemID* GetOwningItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterID* GetOwningCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* CreateIcon(UObject* Owner) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

