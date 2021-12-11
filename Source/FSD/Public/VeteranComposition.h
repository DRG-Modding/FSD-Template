#pragma once
#include "CoreMinimal.h"
#include "RandFloatInterval.h"
#include "VeteranComposition.generated.h"

USTRUCT(BlueprintType)
struct FVeteranComposition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRandFloatInterval Normal;
    
    UPROPERTY(EditAnywhere)
    FRandFloatInterval Large;
    
    FSD_API FVeteranComposition();
};

