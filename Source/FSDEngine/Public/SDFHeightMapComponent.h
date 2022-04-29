#pragma once
#include "CoreMinimal.h"
#include "SDFBaseComponent.h"
#include "SDFHeightMaproperties.h"
#include "SDFHeightMapComponent.generated.h"

class UHeightMapWithMinMaxQuadTree;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API USDFHeightMapComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFHeightMaproperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHeightMapWithMinMaxQuadTree* Heightmap;
    
    USDFHeightMapComponent();
};

