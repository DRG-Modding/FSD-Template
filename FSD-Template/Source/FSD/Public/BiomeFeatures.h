#pragma once
#include "CoreMinimal.h"
#include "BiomeFeatures.generated.h"

class UMinersManualData;

USTRUCT(BlueprintType)
struct FBiomeFeatures {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMinersManualData* Descriptions[2];
    
    FSD_API FBiomeFeatures();
};

