#pragma once
#include "CoreMinimal.h"
#include "FloatPerkRankValue.generated.h"

USTRUCT(BlueprintType)
struct FFloatPerkRankValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSD_API FFloatPerkRankValue();
};

