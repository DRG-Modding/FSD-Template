#pragma once
#include "CoreMinimal.h"
#include "CollectedVictoryPoseEventDelegate.generated.h"

class UVictoryPose;
class UPlayerCharacterID;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCollectedVictoryPoseEvent, UVictoryPose*, pose, UPlayerCharacterID*, characterID);

