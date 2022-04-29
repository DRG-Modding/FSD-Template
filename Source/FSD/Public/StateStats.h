#pragma once
#include "CoreMinimal.h"
#include "StateStats.generated.h"

USTRUCT(BlueprintType)
struct FStateStats {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxAcceleration;
    
    UPROPERTY(EditAnywhere)
    float MaxPawnSpeed;
    
    UPROPERTY(EditAnywhere)
    float MinSlowdownAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxSlowdownAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxBreakingDeceleration;
    
    FSD_API FStateStats();
};

