#pragma once
#include "CoreMinimal.h"
#include "CSGRemappedComponent.h"
#include "SplineModProperties.h"
#include "CSGSplineModComponent.generated.h"

UCLASS()
class UCSGSplineModComponent : public UCSGRemappedComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSplineModProperties SplineProperties;
    
    UCSGSplineModComponent();
};

