#pragma once
#include "CoreMinimal.h"
#include "RemoveFloatingIslandOperationData.h"
#include "GrenadeExplodeOperationData.h"
#include "CarveWithColliderOperationData.h"
#include "DrillOperationData.h"
#include "CarveWithSTLMeshOperationData.h"
#include "MeltOperationData.h"
#include "PickaxeDigOperationData.h"
#include "SplineSegmentCarveOperationData.h"
#include "CSGBuildOperationData.h"
#include "TerrainLateJoinData.generated.h"

USTRUCT(BlueprintType)
struct FTerrainLateJoinData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGrenadeExplodeOperationData> Explosions;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCarveWithColliderOperationData> ColliderCarves;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCarveWithSTLMeshOperationData> MeshCarves;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPickaxeDigOperationData> PickAxe;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRemoveFloatingIslandOperationData> RemoveFloating;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDrillOperationData> Drills;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMeltOperationData> Melts;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSplineSegmentCarveOperationData> Splines;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCSGBuildOperationData> CSGBuilds;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> DebrisInstanceComponentPairs;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<uint32> VisibleChunks;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 OperationCount;
    
    FSD_API FTerrainLateJoinData();
};

