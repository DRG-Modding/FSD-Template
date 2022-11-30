#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SavableDataAsset.h"
#include "RefundableInterface.h"
#include "EUpgradeTiers.h"
#include "EUpgradeClass.h"
#include "ItemUpgradeStatText.h"
#include "UpgradeValues.h"
#include "CraftingCost.h"
#include "ItemUpgrade.generated.h"

class UItemUpgradeCategory;
class UItemUpgrade;
class UResourceData;
class UItemUpgradeElement;
class AActor;
class AFSDPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UItemUpgrade : public USavableDataAsset, public IRefundableInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemUpgradeSignature, UItemUpgrade*, Upgrade);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemUpgradeSignature OnCrafted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemUpgradeSignature OnEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemUpgradeSignature OnUnequipped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseOldCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpgradeTiers UpgradeTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpgradeClass upgradeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemUpgradeCategory* Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, float> UpgradeCraftingCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UResourceData*> ResourceCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgradeElement*> Elements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemUpgradeStatText> StatTexts;
    
public:
    UItemUpgrade();
    UFUNCTION(BlueprintCallable)
    void UnequipUpgrade(TSubclassOf<AActor> itemClass, AFSDPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FItemUpgradeStatText> GetUpgradeStatTexts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetUpgradeName(UItemUpgrade* Upgrade);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCraftingCost> GetUpgradeCost() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetSourceName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetGenericUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, UItemUpgrade* NewUpgradeClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCreditsCost() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipUpgrade(TSubclassOf<AActor> itemClass, AFSDPlayerState* PlayerState);
    
    
    // Fix for true pure virtual functions not being implemented
};

