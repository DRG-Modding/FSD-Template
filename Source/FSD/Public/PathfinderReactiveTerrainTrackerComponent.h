#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "ReactiveTerrainTrackerComponent.h"
#include "PathfinderReactiveTerrainTrackerComponent.generated.h"

class UFSDPhysicalMaterial;
class UStatusEffectsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPathfinderReactiveTerrainTrackerComponent : public UReactiveTerrainTrackerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange CheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDPhysicalMaterial* CurrentPhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStatusEffectsComponent* StatusEffectsComponent;
    
public:
    UPathfinderReactiveTerrainTrackerComponent();
};

