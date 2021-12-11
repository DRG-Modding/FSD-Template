#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_CheckObstruction.generated.h"

UCLASS()
class UBTDecorator_CheckObstruction : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float range;
    
    UPROPERTY(EditAnywhere)
    bool UseOwnerCenterMass;
    
    UPROPERTY(EditAnywhere)
    FVector EyeLocationOffset;
    
    UPROPERTY(EditAnywhere)
    FName RangedSocket;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UBTDecorator_CheckObstruction();
};

