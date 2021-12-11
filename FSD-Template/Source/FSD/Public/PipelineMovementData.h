#pragma once
#include "CoreMinimal.h"
#include "PipelineMovementData.generated.h"

class APipelineSegment;

USTRUCT(BlueprintType)
struct FPipelineMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 Direction;
    
    UPROPERTY(Transient)
    float Distance;
    
    UPROPERTY(Transient)
    float Speed;
    
    UPROPERTY(Transient)
    bool UpToSpeed;
    
    UPROPERTY(Transient)
    float Acceleration;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APipelineSegment> PipelineSegment;
    
    FSD_API FPipelineMovementData();
};

