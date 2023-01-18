#pragma once
#include "CoreMinimal.h"
#include "CSGBuildOperationData.h"
#include "CarveWithColliderOperationData.h"
#include "CarveWithSTLMeshOperationData.h"
#include "DrillOperationData.h"
#include "GrenadeExplodeOperationData.h"
#include "MeltOperationData.h"
#include "PickaxeDigOperationData.h"
#include "RemoveFloatingIslandOperationData.h"
#include "SplineSegmentCarveOperationData.h"
#include "TerrainSpawnDebrisOperationData.h"
#include "TerrainLateJoinData.generated.h"

USTRUCT(BlueprintType)
struct FTerrainLateJoinData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGrenadeExplodeOperationData> Explosions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCarveWithColliderOperationData> ColliderCarves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCarveWithSTLMeshOperationData> MeshCarves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPickaxeDigOperationData> PickAxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRemoveFloatingIslandOperationData> RemoveFloating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDrillOperationData> Drills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMeltOperationData> Melts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSplineSegmentCarveOperationData> Splines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCSGBuildOperationData> CSGBuilds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTerrainSpawnDebrisOperationData> SpawnDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> DebrisInstanceComponentPairs;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint32> VisibleChunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OperationCount;
    
    FSD_API FTerrainLateJoinData();
};

