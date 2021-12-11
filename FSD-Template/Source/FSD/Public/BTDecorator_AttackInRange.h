#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_AttackInRange.generated.h"

UCLASS()
class UBTDecorator_AttackInRange : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AttackName;
    
    UBTDecorator_AttackInRange();
};

