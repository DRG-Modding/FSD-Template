#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "MeshCellNoiseProperties.h"
#include "DeepCSGFloatTree.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "DeepCSGNode.h"
#include "UObject/NoExportTypes.h"
#include "CSGCellNoise.generated.h"

UCLASS(BlueprintType)
class UCSGCellNoise : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMeshCellNoiseProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBinaryTerrainMaterialCombiner Materials;
    
    UPROPERTY(Transient)
    FVector ReciprocalCellSize;
    
    UPROPERTY(Transient)
    FDeepCSGFloatTree ApplyTree;
    
    UPROPERTY(Transient)
    TArray<FVector> CellPositions;
    
    UPROPERTY(Transient)
    TArray<FDeepCSGNode> CellLeaves;
    
    UCSGCellNoise();
};

