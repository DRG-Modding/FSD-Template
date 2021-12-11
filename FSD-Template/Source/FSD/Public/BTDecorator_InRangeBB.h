#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "AITypes.h"
#include "BTDecorator_InRangeBB.generated.h"

UCLASS()
class UBTDecorator_InRangeBB : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MinRangeKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MaxRangeKey;
    
    UPROPERTY(EditAnywhere)
    FAIDistanceType GeometricDistanceType;
    
    UBTDecorator_InRangeBB();
};

