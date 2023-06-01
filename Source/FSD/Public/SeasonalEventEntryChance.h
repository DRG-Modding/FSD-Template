#pragma once
#include "CoreMinimal.h"
#include "SeasonalEventEntryChance.generated.h"

class UMissionTemplate;
class UMutator;
class USpecialEvent;

USTRUCT(BlueprintType)
struct FSeasonalEventEntryChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialEvent* SpecialEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionTemplate*> BannedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMutator*> BannedMutators;
    
    FSD_API FSeasonalEventEntryChance();
};

