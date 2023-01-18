#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "CSGBase.h"
#include "DeepCSGFloatTree.h"
#include "DeepCSGNode.h"
#include "MeshCellNoiseProperties.h"
#include "CSGCellNoise.generated.h"

UCLASS(Blueprintable)
class UCSGCellNoise : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshCellNoiseProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBinaryTerrainMaterialCombiner Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ReciprocalCellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDeepCSGFloatTree ApplyTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> CellPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDeepCSGNode> CellLeaves;
    
    UCSGCellNoise();
};

