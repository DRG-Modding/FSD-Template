#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CarveSplineSegment.generated.h"

USTRUCT(BlueprintType)
struct FCarveSplineSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector SplineStart;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector SplineStartTangent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector SplineEnd;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector SplineEndTangent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FSDENGINE_API FCarveSplineSegment();
};

