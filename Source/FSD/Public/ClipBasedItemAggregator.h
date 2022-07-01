#pragma once
#include "CoreMinimal.h"
#include "ReloadCompleteSignatureDelegate.h"
#include "AmountChangedSignatureDelegate.h"
#include "ItemAggregator.h"
#include "ReloadStartedSignatureDelegate.h"
#include "ReloadTimeLeftSignatureDelegate.h"
#include "ClipBasedItemAggregator.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UClipBasedItemAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmountChangedSignature OnClipAmountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmountChangedSignature OnTotalAmountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmountChangedSignature OnClipAndTotalChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReloadTimeLeftSignature OnReloadTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReloadCompleteSignature OnReloadComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReloadStartedSignature OnReloadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmountChangedSignature OnMaxAmmoCapacityChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowTotalAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowClipAndTotalAsOne;
    
    UClipBasedItemAggregator();
    UFUNCTION(BlueprintCallable)
    void ReloadStarted();
    
    UFUNCTION(BlueprintCallable)
    void ReloadComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClipAmount() const;
    
};

