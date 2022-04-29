#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTree.h"
#include "CSGPlane.generated.h"

UCLASS(Blueprintable)
class UCSGPlane : public UConvexMeshWithCachedTree {
    GENERATED_BODY()
public:
    UCSGPlane();
};

