#pragma once
#include "CoreMinimal.h"
#include "FloatPerkRank.generated.h"

USTRUCT(BlueprintType)
struct FFloatPerkRank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
    FSD_API FFloatPerkRank();
};

