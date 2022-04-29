#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTree.h"
#include "CSGCylinderProperties.h"
#include "CSGCylinder.generated.h"

UCLASS(Blueprintable)
class UCSGCylinder : public UConvexMeshWithCachedTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGCylinderProperties Properties;
    
    UCSGCylinder();
};

