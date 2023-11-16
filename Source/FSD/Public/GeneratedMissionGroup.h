#pragma once
#include "CoreMinimal.h"
#include "GeneratedMissionGroup.generated.h"

class UGeneratedMission;

USTRUCT(BlueprintType)
struct FGeneratedMissionGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGeneratedMission*> AvailableMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool OptedOutOfSeasonContent;
    
    FSD_API FGeneratedMissionGroup();
};

