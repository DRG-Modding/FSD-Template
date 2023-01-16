#pragma once
#include "CoreMinimal.h"
#include "CSGSphereProperties.h"
#include "ConvexMeshWithCachedTreeComponent.h"
#include "CSGSphereComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGSphereComponent : public UConvexMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGSphereProperties Properties;
    
    UCSGSphereComponent();
};

