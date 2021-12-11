#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "SplineHitResult.generated.h"

USTRUCT(BlueprintType)
struct FSplineHitResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadOnly)
    float SplineDistance;
    
    UPROPERTY(BlueprintReadOnly)
    FVector SplineTangent;
    
    FSD_API FSplineHitResult();
};

