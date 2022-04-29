#pragma once
#include "CoreMinimal.h"
#include "LevelGenerationCarverLists.h"
#include "LevelCarverPass.generated.h"

USTRUCT(BlueprintType)
struct FLevelCarverPass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelGenerationCarverLists> Lists;
    
    FSD_API FLevelCarverPass();
};

