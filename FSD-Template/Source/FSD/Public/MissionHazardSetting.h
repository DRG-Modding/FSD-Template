#pragma once
#include "CoreMinimal.h"
#include "MissionHazardSetting.generated.h"

USTRUCT(BlueprintType)
struct FMissionHazardSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Name;
    
    UPROPERTY(EditAnywhere)
    float HazardBonus;
    
    FSD_API FMissionHazardSetting();
};

