#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MissionManager.generated.h"

class URunningMissionBP;

UCLASS(meta=(BlueprintSpawnableComponent))
class UMissionManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<URunningMissionBP*> RunningBlueprints;
    
public:
    UMissionManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMatchStarted();
    
};

