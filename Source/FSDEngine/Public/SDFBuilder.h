#pragma once
#include "CoreMinimal.h"
#include "CSGBuilderBase.h"
#include "EPreviewCellSize.h"
#include "SDFBuilder.generated.h"

class USDFBase;
class USDFUnionOpComponent;
class UTerrainMaterialCore;

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDFUnionOpComponent* SDFRoot;
    
    ASDFBuilder();
};

