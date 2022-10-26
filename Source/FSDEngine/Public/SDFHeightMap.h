#pragma once
#include "CoreMinimal.h"
#include "SDFBase.h"
#include "SDFHeightMaproperties.h"
#include "SDFHeightMap.generated.h"

class UHeightMapWithMinMaxQuadTree;

UCLASS(Blueprintable)
class FSDENGINE_API USDFHeightMap : public USDFBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFHeightMaproperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHeightMapWithMinMaxQuadTree* Heightmap;
    
    USDFHeightMap();
};

