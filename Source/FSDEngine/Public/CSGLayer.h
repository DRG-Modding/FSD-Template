#pragma once
#include "CoreMinimal.h"
#include "CSGGroup.h"
#include "MeshLayerProperties.h"
#include "DeepCSGTree.h"
#include "UObject/NoExportTypes.h"
#include "GeneralTerrainMaterialCombiner.h"
#include "DeepCSGFloatTree.h"
#include "UObject/NoExportTypes.h"
#include "CSGLayer.generated.h"

UCLASS(BlueprintType)
class UCSGLayer : public UCSGGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMeshLayerProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGeneralTerrainMaterialCombiner Materials;
    
    UPROPERTY(Transient)
    FBox WorldSpaceBoundingBox;
    
    UPROPERTY(Transient)
    FDeepCSGFloatTree BoundingTree;
    
    UPROPERTY(Transient)
    FDeepCSGTree TempTree;
    
    UPROPERTY(Transient)
    FMatrix TransformMatInv;
    
    UCSGLayer();
};

