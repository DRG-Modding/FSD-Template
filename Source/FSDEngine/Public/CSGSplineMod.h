#pragma once
#include "CoreMinimal.h"
#include "CSGRemapped.h"
#include "SplineModProperties.h"
#include "Components/SplineComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CSGSplineMod.generated.h"

UCLASS()
class UCSGSplineMod : public UCSGRemapped {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSplineModProperties SplineProperties;
    
    UPROPERTY()
    FSplineCurves SplineCurves;
    
    UPROPERTY()
    TArray<FBox> AABBs;
    
    UPROPERTY()
    TArray<float> Keys;
    
    UPROPERTY()
    TArray<FVector4> Planes;
    
    UPROPERTY()
    FBox TotalAABB;
    
    UCSGSplineMod();
};

