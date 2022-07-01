#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "CarveSplineSegment.h"
#include "MeltOperationData.h"
#include "Engine/LatentActionManager.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "TerrainBaseDoneDelegate.h"
#include "DebrisWhenCarving.h"
#include "ELandscapeCellFilter.h"
#include "TerrainLateJoinData.h"
#include "EncodedChunkId.h"
#include "RemoveFloatingIslandOperationData.h"
#include "CarveWithSTLMeshOperationData.h"
#include "PickaxeDigOperationData.h"
#include "GrenadeExplodeOperationData.h"
#include "DrillOperationData.h"
#include "SplineSegmentCarveOperationData.h"
#include "CSGBuildOperationData.h"
#include "CarveWithColliderOperationData.h"
#include "UObject/NoExportTypes.h"
#include "CSGRaycastHitInfo.h"
#include "EPreciousMaterialOptions.h"
#include "ECarveFilterType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CarveOptionsCellSize.h"
#include "DeepCSGWorld.generated.h"

class UTerrainMaterialsCollection;
class UTerrainType;
class UMaterialInterface;
class UTerrainMaterial;
class UDebrisSet;
class UDebrisBase;
class ADebrisDataActor;
class AProceduralSetup;
class UObject;
class UAsyncPathRequests;
class UDebrisInstances;
class UStaticMesh;
class UPrimitiveComponent;
class USTLMeshCarver;
class ACSGBuilder;
class ADeepCSGWorld;
class UStaticMeshCarver;

UCLASS(Blueprintable)
class FSD_API ADeepCSGWorld : public AActor, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* DebugCarveInsideTerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* DebugCarveOutsizeTerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* DebugCarveEdgeTerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* GoldTerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* MOMTerrrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* NitraTerrrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* EmptyTerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* DefaultBurntTerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* DefaultHardRockMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* DefaultBedRockMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* GoldTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* MOMTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* RockTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* CrystalTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* EmptyTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* DirtTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* DefaultBurntTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialsCollection* TerrainMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDebrisSet*> StandardDebrisSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> AddedDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> DebrisLevelGenerationCarved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> DebrisLargeCarved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> DebrisSmallCarved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> DebrisMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultScannerMaterial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADebrisDataActor* DebrisActorInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DebrisActorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> TerrainMaterialAssets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAsyncPathRequests* AsyncPathRequests;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTerrainBaseDone OnBaseLayerCommitDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTerrainBaseDone OnBaseLayerFinalCommitDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TerrainAttachedActors;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<UObject>> TerrainListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> RegisteredDebrisList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDebrisWhenCarving> DebrisWhenCarvingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisInstances*> DebrisInstanceList;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowAlwaysScannerComponents;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> FogOfWarScannerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> DebrisHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTerrainLateJoinData LateJoinData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEncodedChunkId> VisibleChunks;
    
public:
    ADeepCSGWorld();
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
    void TerrainOp_CarveCSG(const FCSGBuildOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_CarveCollider(const FCarveWithColliderOperationData& Data);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TerrainMaterialDataLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleToScanner(const FVector& Center, const FVector& range);
    
    UFUNCTION(BlueprintCallable)
    void SetRockMaterialForTest(UTerrainMaterial* Material);
    
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
    void CarveWithCSGBuild(TSubclassOf<ACSGBuilder> CSGModel, const FTransform& Transform);
    
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
    
    
    // Fix for true pure virtual functions not being implemented
};

