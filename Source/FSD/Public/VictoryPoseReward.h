#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "VictoryPoseReward.generated.h"

class UVictoryPose;
class UPlayerCharacterID;

UCLASS(Blueprintable, EditInlineNew)
class UVictoryPoseReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVictoryPose* VictoryPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* OptionalCharacterID;
    
public:
    UVictoryPoseReward();
};

