#pragma once
#include "CoreMinimal.h"
#include "PendingRewardsStats.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FPendingRewardsStats {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TMap<UResourceData*, float> AllResources;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<UResourceData*, float> CollectedResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool PrimaryObjectiveCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool SecondaryObjectiveCompleted;
    
    UPROPERTY(EditAnywhere, Transient)
    float TimePlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EnemiesKilled;
    
    FSD_API FPendingRewardsStats();
};

