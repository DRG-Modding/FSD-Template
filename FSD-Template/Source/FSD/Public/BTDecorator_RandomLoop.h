#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_RandomLoop.generated.h"

UCLASS()
class UBTDecorator_RandomLoop : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Chance;
    
    UBTDecorator_RandomLoop();
};

