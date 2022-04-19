#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GeneralTerrainMaterialCombiner.h"
#include "CSGGroup.h"
#include "MeshLayerProperties.h"
#include "DeepCSGFloatTree.h"
#include "DeepCSGTree.h"
#include "UObject/NoExportTypes.h"
#include "CSGLayer.generated.h"

UCLASS(BlueprintType)
class UCSGLayer : public UCSGGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshLayerProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneralTerrainMaterialCombiner Materials;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FBox WorldSpaceBoundingBox;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FDeepCSGFloatTree BoundingTree;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FDeepCSGTree TempTree;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FMatrix TransformMatInv;
    
    UCSGLayer();
};

