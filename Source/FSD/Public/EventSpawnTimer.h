#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventSpawnTimer.generated.h"

UCLASS(Blueprintable)
class AEventSpawnTimer : public AActor {
    GENERATED_BODY()
public:
    AEventSpawnTimer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopTimer();
    
};

