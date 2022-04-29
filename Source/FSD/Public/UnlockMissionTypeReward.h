#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "UnlockMissionTypeReward.generated.h"

class UMissionTemplate;

UCLASS(Blueprintable, EditInlineNew)
class UUnlockMissionTypeReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTemplate* MissionToUnlock;
    
public:
    UUnlockMissionTypeReward();
};

