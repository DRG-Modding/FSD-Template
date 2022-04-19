#pragma once
#include "CoreMinimal.h"
#include "ReactiveTerrainTrackerComponent.h"
#include "PlayerReactiveTerrainTrackerComponent.generated.h"

class UFSDPhysicalMaterial;

UCLASS(meta=(BlueprintSpawnableComponent))
class UPlayerReactiveTerrainTrackerComponent : public UReactiveTerrainTrackerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UFSDPhysicalMaterial* CurrentPhysicalMaterial;
    
public:
    UPlayerReactiveTerrainTrackerComponent();
};

