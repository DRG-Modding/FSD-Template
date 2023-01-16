#pragma once
#include "CoreMinimal.h"
#include "ClaimableRewardEntry.h"
#include "Blueprint/UserWidget.h"
#include "ClaimableRewardEntryWidget.generated.h"

class UClaimableRewardEntryWidget;

UCLASS(Blueprintable, EditInlineNew)
class UClaimableRewardEntryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWidgetDelegate, UClaimableRewardEntryWidget*, EntryWidget);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetDelegate OnRewardClaimed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClaimableRewardEntry Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
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

