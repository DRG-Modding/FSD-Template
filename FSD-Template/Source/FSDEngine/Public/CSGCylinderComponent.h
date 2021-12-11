#pragma once
#include "CoreMinimal.h"
#include "CSGCylinderProperties.h"
#include "ConvexMeshWithCachedTreeComponent.h"
#include "CSGCylinderComponent.generated.h"

UCLASS()
class UCSGCylinderComponent : public UConvexMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGCylinderProperties Properties;
    
    UCSGCylinderComponent();
};

