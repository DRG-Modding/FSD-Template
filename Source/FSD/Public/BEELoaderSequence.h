#pragma once
#include "CoreMinimal.h"
#include "BEELoaderSequence.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FBEELoaderSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    FSD_API FBEELoaderSequence();
};

