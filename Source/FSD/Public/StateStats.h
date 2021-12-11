#pragma once
#include "CoreMinimal.h"
#include "StateStats.generated.h"

USTRUCT(BlueprintType)
struct FStateStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxPawnSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinSlowdownAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSlowdownAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxBreakingDeceleration;
    
    FSD_API FStateStats();
};

