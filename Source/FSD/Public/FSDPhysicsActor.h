#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FSDPhysicsActor.generated.h"

UCLASS(Blueprintable)
class AFSDPhysicsActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MovementUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MovementUpdateEventTriggeredFrequency;
    
    AFSDPhysicsActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ForceMovementUpdate();
    
};

