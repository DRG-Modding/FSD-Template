#pragma once
#include "CoreMinimal.h"
#include "FloatPerkRank.generated.h"

USTRUCT(BlueprintType)
struct FFloatPerkRank {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Tier;
    
    UPROPERTY(EditAnywhere)
    int32 Cost;
    
    FSD_API FFloatPerkRank();
};

