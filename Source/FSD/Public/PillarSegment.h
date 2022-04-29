#pragma once
#include "CoreMinimal.h"
#include "PillarSegment.generated.h"

USTRUCT(BlueprintType)
struct FPillarSegment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    float HeightOffset;
    
    FSD_API FPillarSegment();
};

