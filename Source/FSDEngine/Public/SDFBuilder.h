#pragma once
#include "CoreMinimal.h"
#include "CSGBuilderBase.h"
#include "EPreviewCellSize.h"
#include "SDFBuilder.generated.h"

class UTerrainMaterialCore;
class USDFBase;
class USDFUnionOpComponent;

UCLASS()
class FSDENGINE_API ASDFBuilder : public ACSGBuilderBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPreviewCellSize PreviewSize;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterialCore* PreviewMaterial;
    
    UPROPERTY(Transient)
    USDFBase* CurrentRoot;
    
    UPROPERTY(EditAnywhere, Export)
    USDFUnionOpComponent* SDFRoot;
    
    ASDFBuilder();
};

