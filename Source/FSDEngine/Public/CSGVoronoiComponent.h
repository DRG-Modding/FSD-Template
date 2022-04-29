#pragma once
#include "CoreMinimal.h"
#include "SimpleMeshWithCachedTreeComponent.h"
#include "VoronoiProperties.h"
#include "CSGVoronoiComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGVoronoiComponent : public USimpleMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoronoiProperties Properties;
    
    UCSGVoronoiComponent();
};

