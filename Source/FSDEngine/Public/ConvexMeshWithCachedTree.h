#pragma once
#include "CoreMinimal.h"
#include "SimpleMeshWithCachedTree.h"
#include "ConvexNoiseProperties.h"
#include "ConvexMeshWithCachedTree.generated.h"

UCLASS(Abstract)
class UConvexMeshWithCachedTree : public USimpleMeshWithCachedTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FConvexNoiseProperties Noise;
    
    UConvexMeshWithCachedTree();
};

