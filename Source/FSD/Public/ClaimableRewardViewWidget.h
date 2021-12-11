#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ClaimableRewardView.h"
#include "ClaimableRewardViewWidget.generated.h"

UCLASS(EditInlineNew)
class UClaimableRewardViewWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FClaimableRewardView Data;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEndFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDataChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginFlow();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndRewardFlow();
    
    UFUNCTION(BlueprintCallable)
    void BeginRewardFlow(FClaimableRewardView InViewData);
    
    UClaimableRewardViewWidget();
};

