#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTreeComponent.h"
#include "CSGConvexColliderProperties.h"
#include "CSGConvexColliderComponent.generated.h"

UCLASS()
class UCSGConvexColliderComponent : public UConvexMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGConvexColliderProperties Properties;
    
    UCSGConvexColliderComponent();
};

