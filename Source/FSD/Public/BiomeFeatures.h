#pragma once
#include "CoreMinimal.h"
#include "BiomeFeatures.generated.h"

class UMinersManualData;

USTRUCT(BlueprintType)
struct FBiomeFeatures {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMinersManualData* Descriptions[2];
    
    FSD_API FBiomeFeatures();
};

