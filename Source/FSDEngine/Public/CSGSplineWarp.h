#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "CSGWarped.h"
#include "SplineWarpProperties.h"
#include "CSGSplineWarp.generated.h"

UCLASS(Blueprintable)
class UCSGSplineWarp : public UCSGWarped {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineWarpProperties SplineProperties;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineCurves SplineCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBox> AABBs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector4> planes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox TotalAABB;
    
    UCSGSplineWarp();
};

