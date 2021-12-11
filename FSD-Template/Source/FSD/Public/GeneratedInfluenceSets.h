#pragma once
#include "CoreMinimal.h"
#include "GeneratedInfluenceSet.h"
#include "GeneratedInfluenceSets.generated.h"

USTRUCT(BlueprintType)
struct FGeneratedInfluenceSets {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FGeneratedInfluenceSet> InfluenceSets;
    
    UPROPERTY(Transient)
    bool IsValid;
    
    FSD_API FGeneratedInfluenceSets();
};

