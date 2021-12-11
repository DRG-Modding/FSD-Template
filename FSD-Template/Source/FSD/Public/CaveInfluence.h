#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CaveInfluence.generated.h"

USTRUCT(BlueprintType)
struct FCaveInfluence {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector Center;
    
    UPROPERTY(Transient)
    float range;
    
    FSD_API FCaveInfluence();
};

