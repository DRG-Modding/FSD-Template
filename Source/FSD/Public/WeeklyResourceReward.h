#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "IRandRange.h"
#include "WeeklyResourceReward.generated.h"

class UResourceData;
class AFSDPlayerController;

UCLASS(BlueprintType, EditInlineNew)
class UWeeklyResourceReward : public UReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 ResourceCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIRandRange Amount;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UResourceData*, float> GetRewards(AFSDPlayerController* Player) const;
    
public:
    UWeeklyResourceReward();
};

