#pragma once
#include "CoreMinimal.h"
#include "SeasonalEventEntryChance.generated.h"

class USpecialEvent;

USTRUCT(BlueprintType)
struct FSeasonalEventEntryChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialEvent* SpecialEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChance;
    
    FSD_API FSeasonalEventEntryChance();
};

