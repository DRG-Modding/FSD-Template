#pragma once
#include "CoreMinimal.h"
#include "DifficultyMutatorItem.generated.h"

class UDifficultyMutatorSetupItem;

USTRUCT(BlueprintType)
struct FSD_API FDifficultyMutatorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDifficultyMutatorSetupItem* SetupItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppliedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardBonus;
    
    FDifficultyMutatorItem();
};

