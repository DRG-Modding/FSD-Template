#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WeightedLinePoint.generated.h"

USTRUCT(BlueprintType)
struct FWeightedLinePoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    float range;
    
    UPROPERTY(EditAnywhere)
    float NoiseRange;
    
    UPROPERTY(EditAnywhere)
    float SkewFactor;
    
    UPROPERTY(EditAnywhere)
    float FillAmount;
    
    FSD_API FWeightedLinePoint();
};

