#pragma once
#include "CoreMinimal.h"
#include "LayeredNoise.generated.h"

class UFloodFillSettings;

USTRUCT(BlueprintType)
struct FLayeredNoise {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* Noise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    FSD_API FLayeredNoise();
};

