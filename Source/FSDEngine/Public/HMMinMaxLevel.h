#pragma once
#include "CoreMinimal.h"
#include "HMMinMaxLevel.generated.h"

USTRUCT(BlueprintType)
struct FHMMinMaxLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Entries;
    
    FSDENGINE_API FHMMinMaxLevel();
};

