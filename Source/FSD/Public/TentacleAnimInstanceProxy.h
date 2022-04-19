#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "TentacleAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FTentacleAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FSD_API FTentacleAnimInstanceProxy();
};

