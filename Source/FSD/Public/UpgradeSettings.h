#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UpgradeCostItem.h"
#include "Engine/DataAsset.h"
#include "UpgradeSettings.generated.h"

class UItemUpgrade;
class AActor;

UCLASS(BlueprintType)
class UUpgradeSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UItemUpgrade>> UpgradesToCostRefund;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<int32> ClassAUpgradeCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> ClassBUpgradeCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> GearAUpgradeCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> GearBUpgradeCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> ArmorUpgradeCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> PickaxeUpgradeCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> ClassBoscoUpgradeCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<FUpgradeCostItem> ClassAResourceCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<FUpgradeCostItem> ClassBResourceCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<FUpgradeCostItem> GearAResourceCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<FUpgradeCostItem> GearBResourceCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<FUpgradeCostItem> ArmorResourceCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<FUpgradeCostItem> PickaxeResourceCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<FUpgradeCostItem> ClassBoscoResourceCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<FUpgradeCostItem> OldClassAResourceCosts;
    
    UPROPERTY(EditAnywhere)
    TArray<FUpgradeCostItem> OldClassBResourceCosts;
    
public:
    UFUNCTION(BlueprintCallable)
    static void AddUpgradesFromItems(const TArray<TSubclassOf<AActor>>& Items);
    
    UUpgradeSettings();
};

