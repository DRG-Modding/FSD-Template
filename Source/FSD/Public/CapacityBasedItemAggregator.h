#pragma once
#include "CoreMinimal.h"
#include "ItemAggregator.h"
#include "CapacityBasedItemAggregator.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapacityBasedItemAggregatorOnCurrentAmountChanged, int32, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapacityBasedItemAggregatorOnMaxAmountChanged, int32, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapacityBasedItemAggregatorOnClipAndTotalChanged, int32, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapacityBasedItemAggregatorOnReloadTimeChanged, float, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCapacityBasedItemAggregatorOnReloadStarted);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCapacityBasedItemAggregatorOnReloadComplete);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapacityBasedItemAggregatorOnMaxAmmoCapacityChanged, int32, Amount);

UCLASS()
class UCapacityBasedItemAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCapacityBasedItemAggregatorOnCurrentAmountChanged OnCurrentAmountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCapacityBasedItemAggregatorOnMaxAmountChanged OnMaxAmountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCapacityBasedItemAggregatorOnClipAndTotalChanged OnClipAndTotalChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCapacityBasedItemAggregatorOnReloadTimeChanged OnReloadTimeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCapacityBasedItemAggregatorOnReloadComplete OnReloadComplete;
    
    UPROPERTY(BlueprintAssignable)
    FCapacityBasedItemAggregatorOnReloadStarted OnReloadStarted;
    
    UPROPERTY(BlueprintAssignable)
    FCapacityBasedItemAggregatorOnMaxAmmoCapacityChanged OnMaxAmmoCapacityChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool showClipCount;
    
public:
    UFUNCTION(BlueprintCallable)
    void ReloadStarted();
    
    UFUNCTION(BlueprintCallable)
    void ReloadComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmount() const;
    
    UCapacityBasedItemAggregator();
};

