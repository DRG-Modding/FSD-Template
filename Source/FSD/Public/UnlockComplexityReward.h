#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "UnlockComplexityReward.generated.h"

class UMissionComplexity;
class UMissionTemplate;

UCLASS(Blueprintable, EditInlineNew)
class UUnlockComplexityReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTemplate* mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionComplexity* Complexity;
    
public:
    UUnlockComplexityReward();
};

