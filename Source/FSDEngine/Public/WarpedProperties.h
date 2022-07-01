#pragma once
#include "CoreMinimal.h"
#include "EPreviewCellSize.h"
#include "WarpNoiseProperties.h"
#include "WarpedProperties.generated.h"

USTRUCT(BlueprintType)
struct FWarpedProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreviewCellSize CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarpNoiseProperties WarpNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    FSDENGINE_API FWarpedProperties();
};

