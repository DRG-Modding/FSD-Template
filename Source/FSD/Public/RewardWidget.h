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
    UPROPERTY(BlueprintReadOnly)
    UReward* Reward;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayReceiveAnim();
    
public:
    URewardWidget();
};

