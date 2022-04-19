#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SplineHitResult.generated.h"

USTRUCT(BlueprintType)
struct FSplineHitResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float SplineDistance;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector SplineTangent;
    
    FSD_API FSplineHitResult();
};

