#pragma once
#include "CoreMinimal.h"
#include "ConvexNoiseProperties.h"
#include "SimpleMeshWithCachedTree.h"
#include "ConvexMeshWithCachedTree.generated.h"

UCLASS(Abstract, Blueprintable)
class UConvexMeshWithCachedTree : public USimpleMeshWithCachedTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvexNoiseProperties Noise;
    
    UConvexMeshWithCachedTree();
};

