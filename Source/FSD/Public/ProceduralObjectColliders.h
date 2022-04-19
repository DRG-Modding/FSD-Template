#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProceduralObjectColliders.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UProceduralObjectColliders : public UActorComponent {
    GENERATED_BODY()
public:
    UProceduralObjectColliders();
};

