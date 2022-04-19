#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTree.h"
#include "CSGConvexColliderProperties.h"
#include "CSGConvexCollider.generated.h"

UCLASS()
class UCSGConvexCollider : public UConvexMeshWithCachedTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGConvexColliderProperties Properties;
    
    UCSGConvexCollider();
};

