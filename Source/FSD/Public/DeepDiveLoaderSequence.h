#pragma once
#include "CoreMinimal.h"
#include "DeepDiveLoaderSequence.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FDeepDiveLoaderSequence {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    FSD_API FDeepDiveLoaderSequence();
};

