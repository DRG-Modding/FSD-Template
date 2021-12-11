#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTree.h"
#include "CSGSphereProperties.h"
#include "CSGSphere.generated.h"

UCLASS()
class UCSGSphere : public UConvexMeshWithCachedTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGSphereProperties Properties;
    
    UCSGSphere();
};

