#pragma once
#include "CoreMinimal.h"
#include "CSGWarped.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SplineWarpProperties.h"
#include "Components/SplineComponent.h"
#include "CSGSplineWarp.generated.h"

UCLASS()
class UCSGSplineWarp : public UCSGWarped {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineWarpProperties SplineProperties;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FSplineCurves SplineCurves;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FBox> AABBs;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<float> Keys;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVector4> planes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBox TotalAABB;
    
    UCSGSplineWarp();
};

