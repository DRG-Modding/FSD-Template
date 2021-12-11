#pragma once
#include "CoreMinimal.h"
#include "TreasureRewarder.h"
#include "VictoryPoseRewarder.generated.h"

class UVictoryPose;
class UPlayerCharacterID;

UCLASS()
class UVictoryPoseRewarder : public UTreasureRewarder {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UVictoryPose* GivenPose;
    
    UPROPERTY(Transient)
    UPlayerCharacterID* GivenCharacterID;
    
    UVictoryPoseRewarder();
};

