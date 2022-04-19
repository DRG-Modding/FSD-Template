#pragma once
#include "CoreMinimal.h"
#include "TreasureRewarder.h"
#include "VictoryPoseRewarder.generated.h"

class UVictoryPose;
class UPlayerCharacterID;

UCLASS(meta=(BlueprintSpawnableComponent))
class UVictoryPoseRewarder : public UTreasureRewarder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UVictoryPose* GivenPose;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* GivenCharacterID;
    
    UVictoryPoseRewarder();
};

