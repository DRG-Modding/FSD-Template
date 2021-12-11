#pragma once
#include "CoreMinimal.h"
#include "CSGConvexColliderProperties.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FCSGConvexColliderProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* collider;
    
    FSDENGINE_API FCSGConvexColliderProperties();
};

