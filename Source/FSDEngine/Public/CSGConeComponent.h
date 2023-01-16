#pragma once
#include "CoreMinimal.h"
#include "CSGConeProperties.h"
#include "ConvexMeshWithCachedTreeComponent.h"
#include "CSGConeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGConeComponent : public UConvexMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGConeProperties Properties;
    
    UCSGConeComponent();
};

