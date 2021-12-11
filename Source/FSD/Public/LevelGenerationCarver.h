#pragma once
#include "CoreMinimal.h"
#include "ECarveFilterType.h"
#include "MatrixWithExactSync.h"
#include "CarveOptionsCellSize.h"
#include "LevelGenerationCarver.generated.h"

class UTerrainMaterial;
class USTLMeshCarver;
class UStaticMeshCarver;
class UStaticMesh;

USTRUCT()
struct FLevelGenerationCarver {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMatrixWithExactSync Transform;
    
    UPROPERTY()
    USTLMeshCarver* MeshCarver;
    
    UPROPERTY()
    UStaticMesh* ConvexCarver;
    
    UPROPERTY()
    UStaticMeshCarver* StaticMeshCarver;
    
    UPROPERTY()
    float ConvexExpensiveNoise;
    
    UPROPERTY(EditAnywhere)
    CarveOptionsCellSize CarveCellSize;
    
    UPROPERTY()
    UTerrainMaterial* TerrainMaterial;
    
    UPROPERTY()
    ECarveFilterType Filter;
    
    UPROPERTY()
    bool ToBeDiscarded;
    
    FSD_API FLevelGenerationCarver();
};

