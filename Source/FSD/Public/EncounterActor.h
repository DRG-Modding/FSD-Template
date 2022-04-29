#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EncounterActor.generated.h"

class APawn;

UCLASS(Blueprintable)
class AEncounterActor : public AActor {
    GENERATED_BODY()
public:
    AEncounterActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_EncounterHasSpawned(APawn* spawnedPawn);
    
};

