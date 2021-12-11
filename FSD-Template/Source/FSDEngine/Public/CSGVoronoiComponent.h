#pragma once
#include "CoreMinimal.h"
#include "SimpleMeshWithCachedTreeComponent.h"
#include "VoronoiProperties.h"
#include "CSGVoronoiComponent.generated.h"

UCLASS()
class UCSGVoronoiComponent : public USimpleMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVoronoiProperties Properties;
    
    UCSGVoronoiComponent();
};

