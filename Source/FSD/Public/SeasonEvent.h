#pragma once
#include "CoreMinimal.h"
#include "SeasonEvent.generated.h"

class USeasonEventData;

USTRUCT(BlueprintType)
struct FSeasonEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USeasonEventData* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 count;
    
    FSD_API FSeasonEvent();
};

