#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTree.h"
#include "CSGConvexColliderProperties.h"
#include "CSGConvexCollider.generated.h"

UCLASS()
class UCSGConvexCollider : public UConvexMeshWithCachedTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGConvexColliderProperties Properties;
    
    UCSGConvexCollider();
};

