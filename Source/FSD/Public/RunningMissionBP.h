#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RunningMissionBP.generated.h"

UCLASS(Blueprintable)
class URunningMissionBP : public UObject {
    GENERATED_BODY()
public:
    URunningMissionBP();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLogic();
    
};

