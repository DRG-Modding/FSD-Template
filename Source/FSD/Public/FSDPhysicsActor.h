#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FSDPhysicsActor.generated.h"

UCLASS()
class AFSDPhysicsActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MovementUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MovementUpdateEventTriggeredFrequency;
    
    UFUNCTION(BlueprintCallable)
    void ForceMovementUpdate();
    
    AFSDPhysicsActor();
};

