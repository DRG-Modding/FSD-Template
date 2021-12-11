#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CarveSplineSegment.generated.h"

USTRUCT(BlueprintType)
struct FCarveSplineSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector SplineStart;
    
    UPROPERTY(BlueprintReadWrite)
    FVector SplineStartTangent;
    
    UPROPERTY(BlueprintReadWrite)
    FVector SplineEnd;
    
    UPROPERTY(BlueprintReadWrite)
    FVector SplineEndTangent;
    
    UPROPERTY(BlueprintReadWrite)
    float Radius;
    
    FSDENGINE_API FCarveSplineSegment();
};

