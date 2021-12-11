#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReactiveTerrainTrackerComponent.generated.h"

UCLASS(Abstract)
class UReactiveTerrainTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UReactiveTerrainTrackerComponent();
};

