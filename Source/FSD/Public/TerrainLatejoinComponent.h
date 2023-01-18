#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
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
#include "TerrainLatejoinComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UTerrainLatejoinComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTerrainLatejoinComponent();
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TerrainLateJoinPartReceived();
    
    UFUNCTION(Client, Reliable)
    void Client_TerrainLateJoinVisibleChunks(const TArray<uint32>& VisibleChunks);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TerrainLateJoinPart(const TArray<FGrenadeExplodeOperationData>& Explosions, const TArray<FCarveWithColliderOperationData>& ColliderCarves, const TArray<FCarveWithSTLMeshOperationData>& MeshCarves, const TArray<FPickaxeDigOperationData>& PickAxe, const TArray<FRemoveFloatingIslandOperationData>& floating, const TArray<FDrillOperationData>& Drills, const TArray<FMeltOperationData>& Melts, const TArray<FSplineSegmentCarveOperationData>& Splines, const TArray<FCSGBuildOperationData>& CSGBuilds, const TArray<FTerrainSpawnDebrisOperationData>& SpawnDebris);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TerrainLateJoinDone();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TerrainLateJoinDebris(const TArray<int32>& instanceComponentPairs);
    
};

