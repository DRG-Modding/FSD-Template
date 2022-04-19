#pragma once
#include "CoreMinimal.h"
#include "GemResourceAmount.generated.h"

class UGemResourceCreator;

USTRUCT(BlueprintType)
struct FGemResourceAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UGemResourceCreator* GemCreator;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FSD_API FGemResourceAmount();
};

