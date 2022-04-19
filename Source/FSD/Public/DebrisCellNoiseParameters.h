#pragma once
#include "CoreMinimal.h"
#include "DebrisCellNoiseParameters.generated.h"

class UDebrisCellNoise;

USTRUCT(BlueprintType)
struct FDebrisCellNoiseParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisCellNoise* Noise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinCellValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCellValue;
    
    FSD_API FDebrisCellNoiseParameters();
};

