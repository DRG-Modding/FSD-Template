#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EscortMuleMovementState.generated.h"

USTRUCT(BlueprintType)
struct FEscortMuleMovementState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform TargetTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FQuat AngularVelocity;
    
    FSD_API FEscortMuleMovementState();
};

