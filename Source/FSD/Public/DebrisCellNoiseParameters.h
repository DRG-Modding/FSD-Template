#pragma once
#include "CoreMinimal.h"
#include "DebrisCellNoiseParameters.generated.h"

class UDebrisCellNoise;

USTRUCT(BlueprintType)
struct FDebrisCellNoiseParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDebrisCellNoise* Noise;
    
    UPROPERTY(EditAnywhere)
    int32 MinCellValue;
    
    UPROPERTY(EditAnywhere)
    int32 MaxCellValue;
    
    FSD_API FDebrisCellNoiseParameters();
};

