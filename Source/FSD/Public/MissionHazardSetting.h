#pragma once
#include "CoreMinimal.h"
#include "MissionHazardSetting.generated.h"

USTRUCT(BlueprintType)
struct FMissionHazardSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardBonus;
    
    FSD_API FMissionHazardSetting();
};

