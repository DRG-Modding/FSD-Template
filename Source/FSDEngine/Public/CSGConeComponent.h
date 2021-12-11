#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTreeComponent.h"
#include "CSGConeProperties.h"
#include "CSGConeComponent.generated.h"

UCLASS()
class UCSGConeComponent : public UConvexMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGConeProperties Properties;
    
    UCSGConeComponent();
};

