#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTreeComponent.h"
#include "CSGPlaneComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGPlaneComponent : public UConvexMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UCSGPlaneComponent();
};

