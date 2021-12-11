#pragma once
#include "CoreMinimal.h"
#include "SeasonalEventEntry.generated.h"

class USpecialEvent;
class UMissionTemplate;

USTRUCT(BlueprintType)
struct FSeasonalEventEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USpecialEvent* SpecialEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionTemplate*> BannedMissions;
    
    FSD_API FSeasonalEventEntry();
};

