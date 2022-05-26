#pragma once
#include "CoreMinimal.h"
#include "SeasonSaveEntry.h"
#include "UObject/NoExportTypes.h"
#include "SeasonSave.generated.h"

USTRUCT(BlueprintType)
struct FSeasonSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSeasonSaveEntry> Seasons;
    
public:
    FSD_API FSeasonSave();
};

