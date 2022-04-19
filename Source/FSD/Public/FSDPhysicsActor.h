#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FSDPhysicsActor.generated.h"

UCLASS()
class AFSDPhysicsActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 MovementUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 MovementUpdateEventTriggeredFrequency;
    
    AFSDPhysicsActor();
    UFUNCTION(BlueprintCallable)
    void ForceMovementUpdate();
    
};

