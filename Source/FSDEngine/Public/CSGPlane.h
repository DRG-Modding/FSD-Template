#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTree.h"
#include "CSGPlane.generated.h"

UCLASS()
class UCSGPlane : public UConvexMeshWithCachedTree {
    GENERATED_BODY()
public:
    UCSGPlane();
};

