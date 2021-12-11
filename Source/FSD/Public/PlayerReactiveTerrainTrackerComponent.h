#pragma once
#include "CoreMinimal.h"
#include "ReactiveTerrainTrackerComponent.h"
#include "PlayerReactiveTerrainTrackerComponent.generated.h"

class UFSDPhysicalMaterial;

UCLASS()
class UPlayerReactiveTerrainTrackerComponent : public UReactiveTerrainTrackerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UFSDPhysicalMaterial* CurrentPhysicalMaterial;
    
public:
    UPlayerReactiveTerrainTrackerComponent();
};

