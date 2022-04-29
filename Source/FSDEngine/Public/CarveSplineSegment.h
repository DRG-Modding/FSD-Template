#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CarveSplineSegment.generated.h"

USTRUCT(BlueprintType)
struct FCarveSplineSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SplineStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SplineStartTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SplineEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SplineEndTangent;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    FSDENGINE_API FCarveSplineSegment();
};

