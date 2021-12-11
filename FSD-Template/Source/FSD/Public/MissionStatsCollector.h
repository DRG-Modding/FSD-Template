#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MissionStatsCollector.generated.h"

class APlayerCharacter;
class UCappedResource;

UCLASS()
class UMissionStatsCollector : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    APlayerCharacter* Character;
    
    UFUNCTION(BlueprintCallable)
    void OnResourceIncremented(UCappedResource* Resource, float Amount);
    
public:
    UMissionStatsCollector();
};

