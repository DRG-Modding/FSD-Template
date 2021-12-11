#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "RandomWalkCycleEntry.generated.h"

USTRUCT(BlueprintType)
struct FRandomWalkCycleEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RandomSelectionWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRandRange Duration;
    
    UPROPERTY(EditAnywhere)
    float CoolDown;
    
    UPROPERTY(Transient)
    float LastTimePlayed;
    
    FSD_API FRandomWalkCycleEntry();
};

