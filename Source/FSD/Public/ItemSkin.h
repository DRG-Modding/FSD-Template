#pragma once
#include "CoreMinimal.h"
#include "SavablePrimaryDataAsset.h"
#include "Aquisitionable.h"
#include "EItemSkinType.h"
#include "ItemSkin.generated.h"

class UItemSkin;
class UObject;
class UItemAquisitionBase;
class UDLCBase;
class UItemSkinSet;
class UDynamicIcon;
class USkinEffect;
class UItemID;
class UPlayerCharacterID;
class AFSDPlayerState;
class UMaterialInstanceDynamic;

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
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnlockedFromStart;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLCBase* RequiredDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemSkinType SkinType;
    
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
    UFUNCTION(BlueprintCallable)
    bool Unlock(UObject* WorldContext, UItemID* ItemID, bool broadcast);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Receive_SkinItem(UObject* Skinnable) const;
    
    UFUNCTION(BlueprintCallable)
    void Lock(UObject* WorldContext, UItemID* ItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

