#pragma once
#include "CoreMinimal.h"
#include "CaveInfluenceSet.h"
#include "InfluenceMap.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FInfluenceMap {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<UObject*, FCaveInfluenceSet> CaveInfluences;
    
    FSD_API FInfluenceMap();
};

