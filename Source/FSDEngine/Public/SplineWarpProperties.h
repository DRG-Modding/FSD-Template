#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESplineWarpType.h"
#include "SplineWarpProperties.generated.h"

USTRUCT(BlueprintType)
struct FSplineWarpProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox ElementBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineWarpType SplineWarpType;
    
    FSDENGINE_API FSplineWarpProperties();
};

