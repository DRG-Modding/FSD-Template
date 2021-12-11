#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SeasonReplicatorComponent.generated.h"

class USeasonEventData;

UCLASS()
class USeasonReplicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CompleteSeasonEvent(USeasonEventData* inEvent);
    
    USeasonReplicatorComponent();
};

