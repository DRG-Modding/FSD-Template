#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "UnlockDurationReward.generated.h"

class UMissionDuration;
class UMissionTemplate;

UCLASS(Blueprintable, EditInlineNew)
class UUnlockDurationReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTemplate* mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionDuration* Duration;
    
public:
    UUnlockDurationReward();
};

