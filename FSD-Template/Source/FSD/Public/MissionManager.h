#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MissionManager.generated.h"

class URunningMissionBP;

UCLASS()
class UMissionManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<URunningMissionBP*> RunningBlueprints;
    
    UFUNCTION(BlueprintCallable)
    void OnMatchStarted();
    
public:
    UMissionManager();
};

