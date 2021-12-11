#include "SpawnActorWithDebrisPosComponent.h"
#include "Templates/SubclassOf.h"

class AActor;
class AProceduralSetup;
class UDebrisPositioning;
class UCurveFloat;

bool USpawnActorWithDebrisPosComponent::PlaceActorsWithCallback(int32 NumToSpawn, int32 NumToSpawnMin, int32 NumAllowedChecks, TSubclassOf<AActor> SpawnedActorClass, AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve, FSpawnActorWithDebrisPosComponentOnSpawned OnSpawned, FVector CustomLocation) {
    return false;
}

bool USpawnActorWithDebrisPosComponent::PlaceActors(int32 NumToSpawn, int32 NumToSpawnMin, int32 NumAllowedChecks, TSubclassOf<AActor> SpawnedActorClass, AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve, TArray<AActor*>& OutSpawnedActors, FVector CustomLocation) {
    return false;
}

void USpawnActorWithDebrisPosComponent::AddTerrainPlacement(AActor* Actor, AProceduralSetup* setup) {
}

USpawnActorWithDebrisPosComponent::USpawnActorWithDebrisPosComponent() {
    this->MinDistanceBetweenSpwans = 100.00f;
    this->AddTerrainPlacementBlockers = true;
    this->AvoidImportantLocations = false;
    this->MinDistanceToImportantLocations = 100.00f;
}

