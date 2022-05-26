#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "RandomWalkCycleEntry.generated.h"

USTRUCT(BlueprintType)
struct FRandomWalkCycleEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSelectionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastTimePlayed;
    
    FSD_API FRandomWalkCycleEntry();
};

