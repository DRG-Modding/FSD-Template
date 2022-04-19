#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GDGameStatsTracking.generated.h"

USTRUCT(BlueprintType)
struct FGDGameStatsTracking {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TotalEnemyKillsFilter;
    
    FSD_API FGDGameStatsTracking();
};

