#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "DeepCSGFloatTree.h"
#include "MeshCellNoiseProperties.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "DeepCSGNode.h"
#include "UObject/NoExportTypes.h"
#include "CSGCellNoise.generated.h"

UCLASS(BlueprintType)
class UCSGCellNoise : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshCellNoiseProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBinaryTerrainMaterialCombiner Materials;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector ReciprocalCellSize;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FDeepCSGFloatTree ApplyTree;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> CellPositions;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDeepCSGNode> CellLeaves;
    
    UCSGCellNoise();
};

