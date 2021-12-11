#pragma once
#include "CoreMinimal.h"
#include "CSGConeProperties.h"
#include "ConvexMeshWithCachedTree.h"
#include "CSGCone.generated.h"

UCLASS()
class UCSGCone : public UConvexMeshWithCachedTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGConeProperties Properties;
    
    UCSGCone();
};

