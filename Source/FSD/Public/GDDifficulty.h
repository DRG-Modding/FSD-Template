#pragma once
#include "CoreMinimal.h"
#include "GDDifficulty.generated.h"

class UDifficultySetting;

USTRUCT(BlueprintType)
struct FGDDifficulty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UDifficultySetting*> DifficultySettings;
    
    FSD_API FGDDifficulty();
};

