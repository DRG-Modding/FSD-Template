#pragma once
#include "CoreMinimal.h"
#include "PendingRewardsStats.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FPendingRewardsStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<UResourceData*, float> AllResources;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<UResourceData*, float> CollectedResources;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool PrimaryObjectiveCompleted;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool SecondaryObjectiveCompleted;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float TimePlayed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 EnemiesKilled;
    
    FSD_API FPendingRewardsStats();
};

