#pragma once
#include "CoreMinimal.h"
#include "ConvexNoiseProperties.h"
#include "SimpleMeshWithCachedTreeComponent.h"
#include "ConvexMeshWithCachedTreeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UConvexMeshWithCachedTreeComponent : public USimpleMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvexNoiseProperties Noise;
    
    UConvexMeshWithCachedTreeComponent();
};

