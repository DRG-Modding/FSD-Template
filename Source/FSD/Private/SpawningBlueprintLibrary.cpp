#include "SpawningBlueprintLibrary.h"

class UObject;
class UEnemyGroupDescriptor;
class UEnemyDescriptor;

void USpawningBlueprintLibrary::SpawnEnemyGroupDescriptorSpreadOut(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, const TArray<FVector>& Locations, bool Alert, DeepPathFinderSize pfSize) {
}

void USpawningBlueprintLibrary::SpawnEnemyGroupDescriptor(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, FVector Location, bool Alert, DeepPathFinderSize pfSize) {
}

void USpawningBlueprintLibrary::SpawnEnemiesFromPool(UObject* WorldContextObject, float Difficulty, const TArray<FVector>& Locations, bool Alert, bool isConstantPreassure) {
}

void USpawningBlueprintLibrary::SpawnEnemiesAtLocationWithCallback(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, FVector Location, const FEnemySpawnedDelegate& Callback, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize) {
}

void USpawningBlueprintLibrary::SpawnEnemiesAtLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, FVector Location, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize) {
}

void USpawningBlueprintLibrary::SpawnEnemiesAtEachLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, TArray<FVector> Locations, DeepPathFinderSize pfSize) {
}

TArray<FVector> USpawningBlueprintLibrary::GetSpawnPointsInRange(UObject* WorldContextObject, float distanceToPlayers, int32 spawnPointCount, DeepPathFinderSize pfSize) {
    return TArray<FVector>();
}

TArray<FVector> USpawningBlueprintLibrary::GetSpawnPointsInCircle(UObject* WorldContextObject, FVector Location, float Radius, int32 count, bool scaleToDificulty, float maxSpawnAngle, DeepPathFinderSize pfSize) {
    return TArray<FVector>();
}

TArray<FVector> USpawningBlueprintLibrary::GetSpawnPointsFromLocation(UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize) {
    return TArray<FVector>();
}

TArray<FVector> USpawningBlueprintLibrary::GetSpawnPointsAroundLocation(UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize) {
    return TArray<FVector>();
}

FVector USpawningBlueprintLibrary::GetSpawnPointInRange(UObject* WorldContextObject, float distanceToPlayers, DeepPathFinderSize pfSize) {
    return FVector{};
}

FVector USpawningBlueprintLibrary::GetSpawnPointFromLocation(UObject* WorldContextObject, FVector Location, float Distance, DeepPathFinderSize pfSize) {
    return FVector{};
}

USpawningBlueprintLibrary::USpawningBlueprintLibrary() {
}

