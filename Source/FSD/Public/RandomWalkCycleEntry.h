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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange Duration;
    
    UPROPERTY(EditAnywhere)
    float CoolDown;
    
    UPROPERTY(EditAnywhere, Transient)
    float LastTimePlayed;
    
    FSD_API FRandomWalkCycleEntry();
};

