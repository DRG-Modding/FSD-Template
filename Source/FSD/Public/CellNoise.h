#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CellNoise.generated.h"

USTRUCT(BlueprintType)
struct FCellNoise {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Seed;
    
    UPROPERTY(EditAnywhere)
    FVector CellSize;
    
    UPROPERTY(EditAnywhere)
    int32 NumValues;
    
    UPROPERTY(EditAnywhere)
    int32 MinCellValue;
    
    UPROPERTY(EditAnywhere)
    int32 MaxCellValue;
    
    FSD_API FCellNoise();
};

