#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MissionManager.generated.h"

class URunningMissionBP;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMissionManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URunningMissionBP*> RunningBlueprints;
    
public:
    UMissionManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMatchStarted();
    
};

