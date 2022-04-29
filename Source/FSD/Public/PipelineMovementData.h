#pragma once
#include "CoreMinimal.h"
#include "PipelineMovementData.generated.h"

class APipelineSegment;

USTRUCT(BlueprintType)
struct FPipelineMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Direction;
    
    UPROPERTY(EditAnywhere, Transient)
    float Distance;
    
    UPROPERTY(EditAnywhere, Transient)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool UpToSpeed;
    
    UPROPERTY(EditAnywhere, Transient)
    float Acceleration;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APipelineSegment> PipelineSegment;
    
    FSD_API FPipelineMovementData();
};

