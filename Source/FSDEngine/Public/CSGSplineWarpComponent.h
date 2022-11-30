#pragma once
#include "CoreMinimal.h"
#include "CSGWarpedComponent.h"
#include "SplineWarpProperties.h"
#include "CSGSplineWarpComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGSplineWarpComponent : public UCSGWarpedComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineWarpProperties SplineProperties;
    
    UCSGSplineWarpComponent();
};

