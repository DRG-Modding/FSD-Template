#pragma once
#include "CoreMinimal.h"
#include "ItemAggregator.h"
#include "AmountChangedSignatureDelegate.h"
#include "ReloadTimeLeftSignatureDelegate.h"
#include "ReloadCompleteSignatureDelegate.h"
#include "ReloadStartedSignatureDelegate.h"
#include "CapacityBasedItemAggregator.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCapacityBasedItemAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAmountChangedSignature OnCurrentAmountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAmountChangedSignature OnMaxAmountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAmountChangedSignature OnClipAndTotalChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FReloadTimeLeftSignature OnReloadTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FReloadCompleteSignature OnReloadComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FReloadStartedSignature OnReloadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAmountChangedSignature OnMaxAmmoCapacityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool showClipCount;
    
public:
    UCapacityBasedItemAggregator();
    UFUNCTION(BlueprintCallable)
    void ReloadStarted();
    
    UFUNCTION(BlueprintCallable)
    void ReloadComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmount() const;
    
};

