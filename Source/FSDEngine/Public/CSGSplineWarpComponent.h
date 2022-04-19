#pragma once
#include "CoreMinimal.h"
#include "SplineWarpProperties.h"
#include "CSGWarpedComponent.h"
#include "CSGSplineWarpComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCSGSplineWarpComponent : public UCSGWarpedComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineWarpProperties SplineProperties;
    
    UCSGSplineWarpComponent();
};

