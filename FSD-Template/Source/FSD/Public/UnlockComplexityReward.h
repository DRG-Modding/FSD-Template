#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "UnlockComplexityReward.generated.h"

class UMissionTemplate;
class UMissionComplexity;

UCLASS(BlueprintType, EditInlineNew)
class UUnlockComplexityReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionTemplate* mission;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionComplexity* Complexity;
    
public:
    UUnlockComplexityReward();
};

