#pragma once
#include "CoreMinimal.h"
#include "GrenadeExplodeOperationData.h"
#include "CarveWithSTLMeshOperationData.h"
#include "PickaxeDigOperationData.h"
#include "CarveWithColliderOperationData.h"
#include "RemoveFloatingIslandOperationData.h"
#include "DrillOperationData.h"
#include "MeltOperationData.h"
#include "SplineSegmentCarveOperationData.h"
#include "CSGBuildOperationData.h"
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
    TArray<int32> DebrisInstanceComponentPairs;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<uint32> VisibleChunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OperationCount;
    
    FSD_API FTerrainLateJoinData();
};

