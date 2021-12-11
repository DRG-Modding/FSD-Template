#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "VictoryPoseReward.generated.h"

class UVictoryPose;
class UPlayerCharacterID;

UCLASS(BlueprintType, EditInlineNew)
class UVictoryPoseReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UVictoryPose* VictoryPose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* OptionalCharacterID;
    
public:
    UVictoryPoseReward();
};

