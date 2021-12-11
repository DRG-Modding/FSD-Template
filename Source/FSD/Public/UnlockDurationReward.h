#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "UnlockDurationReward.generated.h"

class UMissionTemplate;
class UMissionDuration;

UCLASS(BlueprintType, EditInlineNew)
class UUnlockDurationReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionTemplate* mission;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionDuration* Duration;
    
public:
    UUnlockDurationReward();
};

