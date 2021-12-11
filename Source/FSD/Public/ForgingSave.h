#pragma once
#include "CoreMinimal.h"
#include "ForgingSave.generated.h"

USTRUCT(BlueprintType)
struct FForgingSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 XP;
    
    UPROPERTY()
    int32 AwardsGiven;
    
    FSD_API FForgingSave();
};

