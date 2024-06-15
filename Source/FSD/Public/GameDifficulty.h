#pragma once
#include "CoreMinimal.h"
#include "DifficultyMutatorItem.h"
#include "GameDifficulty.generated.h"

class UDifficultySetting;

USTRUCT(BlueprintType)
struct FSD_API FGameDifficulty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDifficultySetting* Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDifficultyMutatorItem> Mutators;
    
    FGameDifficulty();
};

