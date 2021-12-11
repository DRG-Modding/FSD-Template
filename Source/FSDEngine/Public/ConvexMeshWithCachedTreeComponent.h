#pragma once
#include "CoreMinimal.h"
#include "SimpleMeshWithCachedTreeComponent.h"
#include "ConvexNoiseProperties.h"
#include "ConvexMeshWithCachedTreeComponent.generated.h"

UCLASS()
class UConvexMeshWithCachedTreeComponent : public USimpleMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FConvexNoiseProperties Noise;
    
    UConvexMeshWithCachedTreeComponent();
};

