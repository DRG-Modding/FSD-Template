#pragma once
#include "CoreMinimal.h"
#include "PillarSegment.generated.h"

USTRUCT(BlueprintType)
struct FPillarSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffset;
    
    FSD_API FPillarSegment();
};

