#include "TerrainLatejoinComponent.h"

void UTerrainLatejoinComponent::Server_TerrainLateJoinPartReceived_Implementation() {
}
bool UTerrainLatejoinComponent::Server_TerrainLateJoinPartReceived_Validate() {
    return true;
}

void UTerrainLatejoinComponent::Client_TerrainLateJoinVisibleChunks_Implementation(const TArray<uint32>& VisibleChunks) {
}

void UTerrainLatejoinComponent::Client_TerrainLateJoinPart_Implementation(const TArray<FGrenadeExplodeOperationData>& Explosions, const TArray<FCarveWithColliderOperationData>& ColliderCarves, const TArray<FCarveWithSTLMeshOperationData>& MeshCarves, const TArray<FPickaxeDigOperationData>& PickAxe, const TArray<FRemoveFloatingIslandOperationData>& floating, const TArray<FDrillOperationData>& Drills, const TArray<FMeltOperationData>& Melts, const TArray<FSplineSegmentCarveOperationData>& Splines, const TArray<FCSGBuildOperationData>& CSGBuilds) {
}

void UTerrainLatejoinComponent::Client_TerrainLateJoinDone_Implementation() {
}

void UTerrainLatejoinComponent::Client_TerrainLateJoinDebris_Implementation(const TArray<int32>& instanceComponentPairs) {
}

UTerrainLatejoinComponent::UTerrainLatejoinComponent() {
}

