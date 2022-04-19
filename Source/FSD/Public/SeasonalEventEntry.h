#pragma once
#include "CoreMinimal.h"
#include "SeasonalEventEntry.generated.h"

class USpecialEvent;
class UMissionTemplate;

USTRUCT(BlueprintType)
struct FSeasonalEventEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialEvent* SpecialEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionTemplate*> BannedMissions;
    
    FSD_API FSeasonalEventEntry();
};

