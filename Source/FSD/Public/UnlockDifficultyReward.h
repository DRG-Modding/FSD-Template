#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "UnlockDifficultyReward.generated.h"

class UDifficultySetting;

UCLASS(BlueprintType, EditInlineNew)
class UUnlockDifficultyReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDifficultySetting* Difficulty;
    
public:
    UUnlockDifficultyReward();
};

