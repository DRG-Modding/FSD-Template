#pragma once
#include "CoreMinimal.h"
#include "HeatSource.generated.h"

USTRUCT(BlueprintType)
struct FHeatSource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Intensity;
    
    FSD_API FHeatSource();
};

