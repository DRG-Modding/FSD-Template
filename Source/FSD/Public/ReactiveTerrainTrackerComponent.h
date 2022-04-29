#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReactiveTerrainTrackerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UReactiveTerrainTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UReactiveTerrainTrackerComponent();
};

