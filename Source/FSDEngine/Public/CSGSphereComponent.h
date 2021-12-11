#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTreeComponent.h"
#include "CSGSphereProperties.h"
#include "CSGSphereComponent.generated.h"

UCLASS()
class UCSGSphereComponent : public UConvexMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGSphereProperties Properties;
    
    UCSGSphereComponent();
};

