#pragma once
#include "CoreMinimal.h"
#include "TickableActionBase.h"
#include "MiniTimerAction.generated.h"

class UObject;
class UMiniTimerAction;

UCLASS()
class UMiniTimerAction : public UTickableActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTickDelegate, float, DeltaTime, float, NormalizedTime);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTickDelegate Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTickDelegate OnTick;
    
public:
    UMiniTimerAction();
protected:
    UFUNCTION(BlueprintCallable)
    static UMiniTimerAction* MiniTimer(UObject* WorldContext, float InDuration);
    
};

