#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ClaimableRewardEntry.h"
#include "ClaimableRewardEntryWidget.generated.h"

class UClaimableRewardEntryWidget;

UCLASS(EditInlineNew)
class UClaimableRewardEntryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWidgetDelegate, UClaimableRewardEntryWidget*, EntryWidget);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FWidgetDelegate OnRewardClaimed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClaimableRewardEntry Data;
    
public:
    UClaimableRewardEntryWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SignalRewardClaimed();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetData(FClaimableRewardEntry InData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDataChanged();
    
};

