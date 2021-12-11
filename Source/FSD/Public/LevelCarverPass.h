#pragma once
#include "CoreMinimal.h"
#include "LevelGenerationCarverLists.h"
#include "LevelCarverPass.generated.h"

USTRUCT(BlueprintType)
struct FLevelCarverPass {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FLevelGenerationCarverLists> Lists;
    
    FSD_API FLevelCarverPass();
};

