#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SeasonReplicatorComponent.generated.h"

class USeasonEventData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USeasonReplicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USeasonReplicatorComponent();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CompleteSeasonEvent(USeasonEventData* inEvent);
    
};

