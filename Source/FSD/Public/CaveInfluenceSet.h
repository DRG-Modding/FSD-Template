#pragma once
#include "CoreMinimal.h"
#include "CaveInfluence.h"
#include "CaveInfluenceSet.generated.h"

USTRUCT(BlueprintType)
struct FCaveInfluenceSet {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FCaveInfluence> CaveInfluences;
    
    FSD_API FCaveInfluenceSet();
};

