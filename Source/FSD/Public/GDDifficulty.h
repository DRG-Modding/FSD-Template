#pragma once
#include "CoreMinimal.h"
#include "GDDifficulty.generated.h"

class UDifficultyMutatorSetupItem;
class UDifficultySetting;

USTRUCT(BlueprintType)
struct FGDDifficulty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDifficultySetting*> DifficultySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDifficultyMutatorSetupItem*> DifficultyMutators;
    
    FSD_API FGDDifficulty();
};

