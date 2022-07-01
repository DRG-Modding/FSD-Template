#pragma once
#include "CoreMinimal.h"
#include "EPreviewCellSize.h"
#include "CSGBuilderBase.h"
#include "SDFBuilder.generated.h"

class UTerrainMaterialCore;
class USDFUnionOpComponent;
class USDFBase;

UCLASS(Blueprintable)
class FSDENGINE_API ASDFBuilder : public ACSGBuilderBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreviewCellSize PreviewSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialCore* PreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USDFBase* CurrentRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USDFUnionOpComponent* SDFRoot;
    
    ASDFBuilder();
};

