#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SeasonSaveEntry.h"
#include "SeasonSave.generated.h"

USTRUCT(BlueprintType)
struct FSeasonSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasFixedUpRewardsRemovedInSeasonFive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasFixedUpSeason3EventScripClaimed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSeasonSaveEntry> Seasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveSeason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredSeason;
    
public:
    FSD_API FSeasonSave();
};

