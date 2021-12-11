#pragma once
#include "CoreMinimal.h"
#include "GemResourceAmount.generated.h"

class UGemResourceCreator;

USTRUCT(BlueprintType)
struct FGemResourceAmount {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGemResourceCreator* GemCreator;
    
    UPROPERTY(Transient)
    int32 Amount;
    
    FSD_API FGemResourceAmount();
};

