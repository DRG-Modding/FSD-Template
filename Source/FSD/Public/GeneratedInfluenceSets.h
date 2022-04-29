#pragma once
#include "CoreMinimal.h"
#include "GeneratedInfluenceSet.h"
#include "GeneratedInfluenceSets.generated.h"

USTRUCT(BlueprintType)
struct FGeneratedInfluenceSets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedInfluenceSet> InfluenceSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsValid;
    
    FSD_API FGeneratedInfluenceSets();
};

