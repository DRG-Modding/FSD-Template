#pragma once
#include "CoreMinimal.h"
#include "SeasonEvent.generated.h"

class USeasonEventData;

USTRUCT(BlueprintType)
struct FSeasonEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    USeasonEventData* Event;
    
    UPROPERTY(BlueprintReadOnly)
    int32 count;
    
    FSD_API FSeasonEvent();
};

