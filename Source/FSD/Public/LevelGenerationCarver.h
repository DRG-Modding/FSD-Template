#pragma once
#include "CoreMinimal.h"
#include "MatrixWithExactSync.h"
#include "CarveOptionsCellSize.h"
#include "ECarveFilterType.h"
#include "LevelGenerationCarver.generated.h"

class USTLMeshCarver;
class UStaticMesh;
class UStaticMeshCarver;
class UTerrainMaterial;

USTRUCT()
struct FLevelGenerationCarver {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FMatrixWithExactSync Transform;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    USTLMeshCarver* MeshCarver;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    UStaticMesh* ConvexCarver;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    UStaticMeshCarver* StaticMeshCarver;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    float ConvexExpensiveNoise;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    CarveOptionsCellSize CarveCellSize;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    UTerrainMaterial* TerrainMaterial;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    ECarveFilterType Filter;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    bool ToBeDiscarded;
    
    FSD_API FLevelGenerationCarver();
};

