#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "UObject/NoExportTypes.h"
#include "LineSegmentFillerPoint.generated.h"

USTRUCT(BlueprintType)
struct FLineSegmentFillerPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange RandomRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange RandomNoiseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange FillAmount;
    
    FSD_API FLineSegmentFillerPoint();
};

