#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "UnlockMissionTypeReward.generated.h"

class UMissionTemplate;

UCLASS(BlueprintType, EditInlineNew)
class UUnlockMissionTypeReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionTemplate* MissionToUnlock;
    
public:
    UUnlockMissionTypeReward();
};

