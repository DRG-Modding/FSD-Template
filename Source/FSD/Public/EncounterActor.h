#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EncounterActor.generated.h"

class APawn;

UCLASS()
class AEncounterActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_EncounterHasSpawned(APawn* spawnedPawn);
    
public:
    AEncounterActor();
};

