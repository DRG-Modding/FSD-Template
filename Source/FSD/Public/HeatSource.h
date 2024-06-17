#pragma once
#include "CoreMinimal.h"
#include "HeatSource.generated.h"

USTRUCT(BlueprintType)
struct FHeatSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Intensity;
    
    FSD_API FHeatSource();
};

