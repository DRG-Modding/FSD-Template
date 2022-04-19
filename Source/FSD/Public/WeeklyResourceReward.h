#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "IRandRange.h"
#include "WeeklyResourceReward.generated.h"

class AFSDPlayerController;
class UResourceData;

UCLASS(BlueprintType, EditInlineNew)
class UWeeklyResourceReward : public UReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange Amount;
    
public:
    UWeeklyResourceReward();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UResourceData*, float> GetRewards(AFSDPlayerController* Player) const;
    
};

