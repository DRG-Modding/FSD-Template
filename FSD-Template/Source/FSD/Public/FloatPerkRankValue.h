#pragma once
#include "CoreMinimal.h"
#include "FloatPerkRankValue.generated.h"

USTRUCT(BlueprintType)
struct FFloatPerkRankValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 RankIndex;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    FSD_API FFloatPerkRankValue();
};

