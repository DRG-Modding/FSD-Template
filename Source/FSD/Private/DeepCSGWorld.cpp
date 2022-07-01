#include "DeepCSGWorld.h"
#include "Templates/SubclassOf.h"
#include "AsyncPathRequests.h"

class UStaticMesh;
class UPrimitiveComponent;
class USTLMeshCarver;
class ACSGBuilder;
class UTerrainMaterial;
class ADeepCSGWorld;
class ADebrisDataActor;
class AActor;
class UStaticMeshCarver;
class UDebrisBase;

void ADeepCSGWorld::UnRegisterScannerComponent(UPrimitiveComponent* Component) {
}

void ADeepCSGWorld::TerrainOp_RemoveFloating_Implementation(const FRemoveFloatingIslandOperationData& Data) {
}

void ADeepCSGWorld::TerrainOp_PickAxe_Implementation(const FPickaxeDigOperationData& Data) {
}

void ADeepCSGWorld::TerrainOp_Melt_Implementation(const FMeltOperationData& Data) {
}

void ADeepCSGWorld::TerrainOp_Explode_Implementation(const FGrenadeExplodeOperationData& Data) {
}

void ADeepCSGWorld::TerrainOp_Drill_Implementation(const FDrillOperationData& Data) {
}

void ADeepCSGWorld::TerrainOp_CarveSTLMesh_Implementation(const FCarveWithSTLMeshOperationData& Data) {
}

void ADeepCSGWorld::TerrainOp_CarveSplineSegment_Implementation(const FSplineSegmentCarveOperationData& Data) {
}

void ADeepCSGWorld::TerrainOp_CarveCSG_Implementation(const FCSGBuildOperationData& Data) {
}

void ADeepCSGWorld::TerrainOp_CarveCollider_Implementation(const FCarveWithColliderOperationData& Data) {
}

void ADeepCSGWorld::TerrainMaterialDataLoaded() {
}

void ADeepCSGWorld::SetVisibleToScanner(const FVector& Center, const FVector& range) {
}

void ADeepCSGWorld::SetRockMaterialForTest(UTerrainMaterial* Material) {
}

void ADeepCSGWorld::SelectDebrisSettings() {
}

void ADeepCSGWorld::ResetEntireWorld() {
}

void ADeepCSGWorld::RemoveDebrisInstance_TerrainOp2_Implementation(int32 instance, int32 Component) {
}

void ADeepCSGWorld::RemoveDebrisInSphere(const FVector& Position, float Radius, bool onlyFragile, bool alsoDurable) {
}

void ADeepCSGWorld::RegisterScannerComponent(UPrimitiveComponent* Component, bool useFogOfWar) {
}

bool ADeepCSGWorld::Raycast(FVector Start, FVector Direction, float MaxDistance, FCSGRaycastHitInfo& HitInfo, ELandscapeCellFilter Filter) const {
    return false;
}

bool ADeepCSGWorld::Linecast(FVector Start, FVector End, FCSGRaycastHitInfo& HitInfo, ELandscapeCellFilter Filter) const {
    return false;
}

bool ADeepCSGWorld::IsPositionVisibleToScanner(const FVector& Pos) const {
    return false;
}

bool ADeepCSGWorld::IsPointInsideTerrain(const FVector& Pos) const {
    return false;
}

bool ADeepCSGWorld::IsComponentRegisteredWithScanner(UPrimitiveComponent* Component) {
    return false;
}

int32 ADeepCSGWorld::GetTerrainHash() {
    return 0;
}

int32 ADeepCSGWorld::GetShadowQuality() {
    return 0;
}

ADebrisDataActor* ADeepCSGWorld::GetDebrisDataActor() const {
    return NULL;
}

void ADeepCSGWorld::GetAllTerrainActorsAroundPoint(const FVector& Center, const FVector& range, TArray<AActor*>& TerrainActors) {
}

void ADeepCSGWorld::GenerateAllMeshes() {
}

void ADeepCSGWorld::FinishGeneration_Blocking() {
}

float ADeepCSGWorld::FindTotalVolumeOfMaterialInWorld(UTerrainMaterial* Material) {
    return 0.0f;
}

void ADeepCSGWorld::CarveWithSTLMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo) {
}

void ADeepCSGWorld::CarveWithSTLMeshUsingTransform(USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious) {
}

void ADeepCSGWorld::CarveWithSTLMesh_Wait(ADeepCSGWorld* CSGWorld, USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo) {
}

void ADeepCSGWorld::CarveWithSTLMesh(USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious) {
}

void ADeepCSGWorld::CarveWithStaticMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo) {
}

void ADeepCSGWorld::CarveWithStaticMeshUsingTransform(UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious) {
}

void ADeepCSGWorld::CarveWithStaticMesh(UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious) {
}

void ADeepCSGWorld::CarveWithSplineSegments(const TArray<FCarveSplineSegment>& Segments, UTerrainMaterial* Material, ECarveFilterType CarveFilter, EPreciousMaterialOptions Precious) {
}

void ADeepCSGWorld::CarveWithSplineSegment(const FVector& SplineStart, const FVector& SplineStartTangent, const FVector& SplineEnd, const FVector& SplineEndTangent, float Radius, UTerrainMaterial* Material, ECarveFilterType CarveFilter, EPreciousMaterialOptions Precious) {
}

void ADeepCSGWorld::CarveWithMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, float ExpensiveNoise, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo) {
}

void ADeepCSGWorld::CarveWithMeshUsingTransform(UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, float ExpensiveNoise, EPreciousMaterialOptions Precious, CarveOptionsCellSize CarverSize) {
}

void ADeepCSGWorld::CarveWithMesh_Wait(ADeepCSGWorld* CSGWorld, UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, FLatentActionInfo LatentInfo) {
}

void ADeepCSGWorld::CarveWithMesh(UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious) {
}

void ADeepCSGWorld::CarveWithCSGBuild(TSubclassOf<ACSGBuilder> CSGModel, const FTransform& Transform) {
}

float ADeepCSGWorld::CalcApproximateTerrainDensity(FVector Pos, float Radius) {
    return 0.0f;
}

void ADeepCSGWorld::BaseLayerCommitFinal(bool blocking) {
}

void ADeepCSGWorld::BaseLayerCommit(bool blocking, bool scheduleTesselation) {
}

void ADeepCSGWorld::AttachActorToTerrain(AActor* Actor, FVector Pos) {
}

void ADeepCSGWorld::ApplyBaseDebrisCarvers(const TArray<UDebrisBase*>& Carvers) {
}

ADeepCSGWorld::ADeepCSGWorld() {
    this->MOMTerrrainMaterial = NULL;
    this->NitraTerrrainMaterial = NULL;
    this->GoldTerrainType = NULL;
    this->MOMTerrainType = NULL;
    this->RockTerrainType = NULL;
    this->CrystalTerrainType = NULL;
    this->EmptyTerrainType = NULL;
    this->DirtTerrainType = NULL;
    this->DefaultBurntTerrainType = NULL;
    this->DebrisActorInstance = NULL;
    this->DebrisActorIndex = 0;
    this->ProceduralSetup = NULL;
    this->AsyncPathRequests = CreateDefaultSubobject<UAsyncPathRequests>(TEXT("AsyncPathRequests"));
}

