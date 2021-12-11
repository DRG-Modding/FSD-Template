#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebrisWhenCarving.h"
#include "CarveOptionsCellSize.h"
#include "DrillOperationData.h"
#include "MeltOperationData.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "TerrainLateJoinData.h"
#include "EncodedChunkId.h"
#include "RemoveFloatingIslandOperationData.h"
#include "PickaxeDigOperationData.h"
#include "GrenadeExplodeOperationData.h"
#include "CarveWithSTLMeshOperationData.h"
#include "SplineSegmentCarveOperationData.h"
#include "CarveWithColliderOperationData.h"
#include "UObject/NoExportTypes.h"
#include "CSGRaycastHitInfo.h"
#include "ELandscapeCellFilter.h"
#include "UObject/NoExportTypes.h"
#include "ECarveFilterType.h"
#include "UObject/NoExportTypes.h"
#include "EPreciousMaterialOptions.h"
#include "Engine/LatentActionManager.h"
#include "CarveSplineSegment.h"
#include "DeepCSGWorld.generated.h"

class UMaterialInterface;
class UDebrisSet;
class UTerrainType;
class UTerrainMaterial;
class UTerrainMaterialsCollection;
class UStaticMeshCarver;
class UDebrisBase;
class AProceduralSetup;
class ADebrisDataActor;
class UObject;
class UAsyncPathRequests;
class UDebrisInstances;
class UPrimitiveComponent;
class UStaticMesh;
class ADeepCSGWorld;
class USTLMeshCarver;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeepCSGWorldOnBaseLayerCommitDone);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeepCSGWorldOnBaseLayerFinalCommitDone);

UCLASS()
class ADeepCSGWorld : public AActor, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* DebugCarveInsideTerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* DebugCarveOutsizeTerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* DebugCarveEdgeTerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* GoldTerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* MOMTerrrainMaterial;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* NitraTerrrainMaterial;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* EmptyTerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* DefaultBurntTerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* DefaultHardRockMaterial;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* DefaultBedRockMaterial;
    
    UPROPERTY(EditAnywhere)
    UTerrainType* GoldTerrainType;
    
    UPROPERTY(EditAnywhere)
    UTerrainType* MOMTerrainType;
    
    UPROPERTY(EditAnywhere)
    UTerrainType* RockTerrainType;
    
    UPROPERTY(EditAnywhere)
    UTerrainType* CrystalTerrainType;
    
    UPROPERTY(EditAnywhere)
    UTerrainType* EmptyTerrainType;
    
    UPROPERTY(EditAnywhere)
    UTerrainType* DirtTerrainType;
    
    UPROPERTY(EditAnywhere)
    UTerrainType* DefaultBurntTerrainType;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterialsCollection* TerrainMaterials;
    
    UPROPERTY(EditAnywhere)
    TArray<UDebrisSet*> StandardDebrisSets;
    
    UPROPERTY(Transient)
    TArray<UDebrisBase*> AddedDebris;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UDebrisBase*> DebrisLevelGenerationCarved;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UDebrisBase*> DebrisLargeCarved;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UDebrisBase*> DebrisSmallCarved;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UDebrisBase*> DebrisMeshes;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DefaultScannerMaterial;
    
protected:
    UPROPERTY(Transient)
    ADebrisDataActor* DebrisActorInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 DebrisActorIndex;
    
    UPROPERTY(Transient)
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(Transient)
    TArray<UObject*> TerrainMaterialAssets;
    
private:
    UPROPERTY(Export)
    UAsyncPathRequests* AsyncPathRequests;
    
    UPROPERTY(BlueprintAssignable)
    FDeepCSGWorldOnBaseLayerCommitDone OnBaseLayerCommitDone;
    
    UPROPERTY(BlueprintAssignable)
    FDeepCSGWorldOnBaseLayerFinalCommitDone OnBaseLayerFinalCommitDone;
    
    UPROPERTY(Transient)
    TArray<AActor*> TerrainAttachedActors;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<UObject>> TerrainListeners;
    
    UPROPERTY(Transient)
    TArray<UDebrisBase*> RegisteredDebrisList;
    
    UPROPERTY(Transient)
    TArray<FDebrisWhenCarving> DebrisWhenCarvingList;
    
    UPROPERTY(Export, Transient)
    TArray<UDebrisInstances*> DebrisInstanceList;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowAlwaysScannerComponents;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> FogOfWarScannerComponents;
    
    UPROPERTY(Transient)
    TArray<UDebrisBase*> DebrisHandles;
    
    UPROPERTY(Transient)
    FTerrainLateJoinData LateJoinData;
    
    UPROPERTY(Transient)
    TArray<FEncodedChunkId> visibleChunks;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnRegisterScannerComponent(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_RemoveFloating(const FRemoveFloatingIslandOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_PickAxe(const FPickaxeDigOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_Melt(const FMeltOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_Explode(const FGrenadeExplodeOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_Drill(const FDrillOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_CarveSTLMesh(const FCarveWithSTLMeshOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_CarveSplineSegment(const FSplineSegmentCarveOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_CarveCollider(const FCarveWithColliderOperationData& Data);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TerrainMaterialDataLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleToScanner(const FVector& Center, const FVector& range);
    
    UFUNCTION(BlueprintCallable)
    void SelectDebrisSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetEntireWorld();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RemoveDebrisInstance_TerrainOp2(int32 instance, int32 Component);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDebrisInSphere(const FVector& Position, float Radius, bool onlyFragile, bool alsoDurable);
    
    UFUNCTION(BlueprintCallable)
    void RegisterScannerComponent(UPrimitiveComponent* Component, bool useFogOfWar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Raycast(FVector Start, FVector Direction, float MaxDistance, FCSGRaycastHitInfo& HitInfo, ELandscapeCellFilter Filter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Linecast(FVector Start, FVector End, FCSGRaycastHitInfo& HitInfo, ELandscapeCellFilter Filter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPositionVisibleToScanner(const FVector& Pos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointInsideTerrain(const FVector& Pos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComponentRegisteredWithScanner(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTerrainHash();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShadowQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADebrisDataActor* GetDebrisDataActor() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAllTerrainActorsAroundPoint(const FVector& Center, const FVector& range, TArray<AActor*>& TerrainActors);
    
    UFUNCTION(BlueprintCallable)
    void GenerateAllMeshes();
    
    UFUNCTION(BlueprintCallable)
    void FinishGeneration_Blocking();
    
    UFUNCTION(BlueprintCallable)
    float FindTotalVolumeOfMaterialInWorld(UTerrainMaterial* Material);
    
    UFUNCTION(BlueprintCallable)
    static void CarveWithSTLMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithSTLMeshUsingTransform(USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious);
    
    UFUNCTION(BlueprintCallable)
    static void CarveWithSTLMesh_Wait(ADeepCSGWorld* CSGWorld, USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithSTLMesh(USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious);
    
    UFUNCTION(BlueprintCallable)
    static void CarveWithStaticMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithStaticMeshUsingTransform(UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithStaticMesh(UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithSplineSegments(const TArray<FCarveSplineSegment>& Segments, UTerrainMaterial* Material, ECarveFilterType CarveFilter, EPreciousMaterialOptions Precious);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithSplineSegment(const FVector& SplineStart, const FVector& SplineStartTangent, const FVector& SplineEnd, const FVector& SplineEndTangent, float Radius, UTerrainMaterial* Material, ECarveFilterType CarveFilter, EPreciousMaterialOptions Precious);
    
    UFUNCTION(BlueprintCallable)
    static void CarveWithMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, float ExpensiveNoise, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithMeshUsingTransform(UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, float ExpensiveNoise, EPreciousMaterialOptions Precious, CarveOptionsCellSize CarverSize);
    
    UFUNCTION(BlueprintCallable)
    static void CarveWithMesh_Wait(ADeepCSGWorld* CSGWorld, UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithMesh(UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious);
    
    UFUNCTION(BlueprintCallable)
    float CalcApproximateTerrainDensity(FVector Pos, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void BaseLayerCommitFinal(bool blocking);
    
    UFUNCTION(BlueprintCallable)
    void BaseLayerCommit(bool blocking, bool scheduleTesselation);
    
    UFUNCTION(BlueprintCallable)
    void AttachActorToTerrain(AActor* Actor, FVector Pos);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBaseDebrisCarvers(const TArray<UDebrisBase*>& Carvers);
    
    ADeepCSGWorld();
    
    // Fix for true pure virtual functions not being implemented
};

