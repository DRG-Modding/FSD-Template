#pragma once
#include "CoreMinimal.h"
#include "HMMinMaxLevel.generated.h"

USTRUCT(BlueprintType)
struct FHMMinMaxLevel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<float> Entries;
    
    FSDENGINE_API FHMMinMaxLevel();
};

