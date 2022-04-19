#pragma once
#include "CoreMinimal.h"
#include "RandFloatInterval.h"
#include "VeteranComposition.generated.h"

USTRUCT(BlueprintType)
struct FVeteranComposition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandFloatInterval Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandFloatInterval Large;
    
    FSD_API FVeteranComposition();
};

