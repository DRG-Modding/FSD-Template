#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RewardWidget.generated.h"

class UReward;

UCLASS(EditInlineNew)
class URewardWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UReward* Reward;
    
public:
    URewardWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayReceiveAnim();
    
};

