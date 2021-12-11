#pragma once
#include "CoreMinimal.h"
#include "ReactiveTerrainTrackerComponent.h"
#include "RandRange.h"
#include "PathfinderReactiveTerrainTrackerComponent.generated.h"

class UFSDPhysicalMaterial;
class UStatusEffectsComponent;

UCLASS()
class UPathfinderReactiveTerrainTrackerComponent : public UReactiveTerrainTrackerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FRandRange CheckInterval;
    
    UPROPERTY(Transient)
    UFSDPhysicalMaterial* CurrentPhysicalMaterial;
    
    UPROPERTY(Export, Transient)
    UStatusEffectsComponent* StatusEffectsComponent;
    
public:
    UPathfinderReactiveTerrainTrackerComponent();
};

