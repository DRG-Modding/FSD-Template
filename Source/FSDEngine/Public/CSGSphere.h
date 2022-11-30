#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTree.h"
#include "CSGSphereProperties.h"
#include "CSGSphere.generated.h"

UCLASS(Blueprintable)
class UCSGSphere : public UConvexMeshWithCachedTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGSphereProperties Properties;
    
    UCSGSphere();
};

