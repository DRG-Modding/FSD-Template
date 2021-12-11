#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RandRange.h"
#include "RandLinePoint.generated.h"

USTRUCT(BlueprintType)
struct FRandLinePoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    FRandRange range;
    
    UPROPERTY(EditAnywhere)
    FRandRange NoiseRange;
    
    UPROPERTY(EditAnywhere)
    FRandRange SkewFactor;
    
    UPROPERTY(EditAnywhere)
    FRandRange FillAmount;
    
    FSD_API FRandLinePoint();
};

