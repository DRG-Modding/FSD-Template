#pragma once
#include "CoreMinimal.h"
#include "ItemAggregator.h"
#include "ClipBasedItemAggregator.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FClipBasedItemAggregatorOnReloadStarted);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FClipBasedItemAggregatorOnReloadComplete);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClipBasedItemAggregatorOnClipAmountChanged, int32, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClipBasedItemAggregatorOnMaxAmmoCapacityChanged, int32, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClipBasedItemAggregatorOnTotalAmountChanged, int32, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClipBasedItemAggregatorOnClipAndTotalChanged, int32, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClipBasedItemAggregatorOnReloadTimeChanged, float, Amount);

UCLASS()
class UClipBasedItemAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FClipBasedItemAggregatorOnClipAmountChanged OnClipAmountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FClipBasedItemAggregatorOnTotalAmountChanged OnTotalAmountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FClipBasedItemAggregatorOnClipAndTotalChanged OnClipAndTotalChanged;
    
    UPROPERTY(BlueprintAssignable)
    FClipBasedItemAggregatorOnReloadTimeChanged OnReloadTimeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FClipBasedItemAggregatorOnReloadComplete OnReloadComplete;
    
    UPROPERTY(BlueprintAssignable)
    FClipBasedItemAggregatorOnReloadStarted OnReloadStarted;
    
    UPROPERTY(BlueprintAssignable)
    FClipBasedItemAggregatorOnMaxAmmoCapacityChanged OnMaxAmmoCapacityChanged;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowTotalAmount;
    
    UFUNCTION(BlueprintCallable)
    void ReloadStarted();
    
    UFUNCTION(BlueprintCallable)
    void ReloadComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClipAmount() const;
    
    UClipBasedItemAggregator();
};

