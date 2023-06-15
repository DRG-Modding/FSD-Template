#pragma once
#include "CoreMinimal.h"
#include "SeasonalEventEntry.generated.h"

class UMissionTemplate;
class UMutator;
class USpecialEvent;

USTRUCT(BlueprintType)
struct FSeasonalEventEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialEvent* SpecialEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionTemplate*> BannedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMutator*> BannedMutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredMainCampaignProgress;
    
    FSD_API FSeasonalEventEntry();
};

