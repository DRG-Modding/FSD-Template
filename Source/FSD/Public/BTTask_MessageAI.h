#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_MessageAI.generated.h"

UCLASS()
class UBTTask_MessageAI : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName MessageName;
    
public:
    UBTTask_MessageAI();
};

