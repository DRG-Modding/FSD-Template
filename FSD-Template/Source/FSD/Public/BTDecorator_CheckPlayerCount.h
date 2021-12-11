#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_CheckPlayerCount.generated.h"

UCLASS()
class UBTDecorator_CheckPlayerCount : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 playerCount;
    
    UPROPERTY(EditAnywhere)
    bool AllowLessThanCount;
    
public:
    UBTDecorator_CheckPlayerCount();
};

