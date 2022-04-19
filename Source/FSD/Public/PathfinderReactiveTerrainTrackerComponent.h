#pragma once
#include "CoreMinimal.h"
#include "ReactiveTerrainTrackerComponent.h"
#include "RandRange.h"
#include "PathfinderReactiveTerrainTrackerComponent.generated.h"

class UFSDPhysicalMaterial;
class UStatusEffectsComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UPathfinderReactiveTerrainTrackerComponent : public UReactiveTerrainTrackerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange CheckInterval;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UFSDPhysicalMaterial* CurrentPhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UStatusEffectsComponent* StatusEffectsComponent;
    
public:
    UPathfinderReactiveTerrainTrackerComponent();
};

