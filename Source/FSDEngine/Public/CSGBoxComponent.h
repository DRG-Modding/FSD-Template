#pragma once
#include "CoreMinimal.h"
#include "MeshBoxProperties.h"
#include "ConvexMeshWithCachedTreeComponent.h"
#include "CSGBoxComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCSGBoxComponent : public UConvexMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshBoxProperties Properties;
    
    UCSGBoxComponent();
};

