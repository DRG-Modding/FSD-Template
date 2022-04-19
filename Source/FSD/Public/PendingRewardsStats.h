#pragma once
#include "CoreMinimal.h"
#include "PendingRewardsStats.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FPendingRewardsStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, float> AllResources;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, float> CollectedResources;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool PrimaryObjectiveCompleted;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool SecondaryObjectiveCompleted;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float TimePlayed;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 EnemiesKilled;
    
    FSD_API FPendingRewardsStats();
};

