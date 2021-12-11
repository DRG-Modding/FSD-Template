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
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDifficultySetting* Difficulty;
    
public:
    UUnlockDifficultyReward();
};

