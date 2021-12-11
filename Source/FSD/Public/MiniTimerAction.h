#pragma once
#include "CoreMinimal.h"
#include "TickableActionBase.h"
#include "MiniTimerAction.generated.h"

class UMiniTimerAction;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMiniTimerActionCompleted, float, DeltaTime, float, NormalizedTime);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMiniTimerActionOnTick, float, DeltaTime, float, NormalizedTime);

UCLASS()
class UMiniTimerAction : public UTickableActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FMiniTimerActionCompleted Completed;
    
    UPROPERTY(BlueprintAssignable)
    FMiniTimerActionOnTick OnTick;
    
    UFUNCTION(BlueprintCallable)
    static UMiniTimerAction* MiniTimer(UObject* WorldContext, float InDuration);
    
public:
    UMiniTimerAction();
};

