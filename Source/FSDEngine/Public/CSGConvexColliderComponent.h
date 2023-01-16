#pragma once
#include "CoreMinimal.h"
#include "CSGConvexColliderProperties.h"
#include "ConvexMeshWithCachedTreeComponent.h"
#include "CSGConvexColliderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGConvexColliderComponent : public UConvexMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGConvexColliderProperties Properties;
    
    UCSGConvexColliderComponent();
};

