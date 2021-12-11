#pragma once
#include "CoreMinimal.h"
#include "HeatSource.generated.h"

USTRUCT(BlueprintType)
struct FHeatSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Temperature;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Intensity;
    
    FSD_API FHeatSource();
};

