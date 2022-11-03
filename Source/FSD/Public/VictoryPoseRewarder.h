#pragma once
#include "CoreMinimal.h"
#include "TreasureRewarder.h"
#include "VictoryPoseRewarder.generated.h"

class UVictoryPose;
class UPlayerCharacterID;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVictoryPoseRewarder : public UTreasureRewarder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVictoryPose* GivenPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* GivenCharacterID;
    
    UVictoryPoseRewarder();
};

