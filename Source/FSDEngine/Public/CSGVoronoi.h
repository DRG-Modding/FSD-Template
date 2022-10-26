#pragma once
#include "CoreMinimal.h"
#include "SimpleMeshWithCachedTree.h"
#include "VoronoiProperties.h"
#include "CSGVoronoi.generated.h"

UCLASS(Blueprintable)
class UCSGVoronoi : public USimpleMeshWithCachedTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoronoiProperties Properties;
    
    UCSGVoronoi();
};

