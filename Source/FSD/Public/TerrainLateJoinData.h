#pragma once
#include "CoreMinimal.h"
#include "GrenadeExplodeOperationData.h"
#include "CarveWithColliderOperationData.h"
#include "CarveWithSTLMeshOperationData.h"
#include "PickaxeDigOperationData.h"
#include "RemoveFloatingIslandOperationData.h"
#include "MeltOperationData.h"
#include "DrillOperationData.h"
#include "SplineSegmentCarveOperationData.h"
#include "TerrainLateJoinData.generated.h"

USTRUCT(BlueprintType)
struct FTerrainLateJoinData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FGrenadeExplodeOperationData> explosions;
    
    UPROPERTY(Transient)
    TArray<FCarveWithColliderOperationData> colliderCarves;
    
    UPROPERTY(Transient)
    TArray<FCarveWithSTLMeshOperationData> meshCarves;
    
    UPROPERTY(Transient)
    TArray<FPickaxeDigOperationData> pickAxe;
    
    UPROPERTY(Transient)
    TArray<FRemoveFloatingIslandOperationData> RemoveFloating;
    
    UPROPERTY(Transient)
    TArray<FDrillOperationData> drills;
    
    UPROPERTY(Transient)
    TArray<FMeltOperationData> melts;
    
    UPROPERTY(Transient)
    TArray<FSplineSegmentCarveOperationData> splines;
    
    UPROPERTY(Transient)
    TArray<int32> DebrisInstanceComponentPairs;
    
    UPROPERTY(Transient)
    TArray<uint32> visibleChunks;
    
    UPROPERTY(Transient)
    int32 OperationCount;
    
    FSD_API FTerrainLateJoinData();
};

