#pragma once
#include "CoreMinimal.h"
#include "DifficultyMutatorInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FDifficultyMutatorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    FSD_API FDifficultyMutatorInfo();
};

