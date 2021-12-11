#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTree.h"
#include "CSGCylinderProperties.h"
#include "CSGCylinder.generated.h"

UCLASS()
class UCSGCylinder : public UConvexMeshWithCachedTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGCylinderProperties Properties;
    
    UCSGCylinder();
};

