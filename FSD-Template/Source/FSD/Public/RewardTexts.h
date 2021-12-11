#pragma once
#include "CoreMinimal.h"
#include "RewardTexts.generated.h"

USTRUCT(BlueprintType)
struct FRewardTexts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText PrimaryObjective;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SecondaryObjective;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CountPrimaryObjectives;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CountSecondaryObjectives;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText MineralsMinedByTeam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText HostilesKilled;
    
    FSD_API FRewardTexts();
};

