#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DeepPathFinderSize.h"
#include "EnemySpawnedDelegateDelegate.h"
#include "SpawningBlueprintLibrary.generated.h"

class UEnemyDescriptor;
class UEnemyGroupDescriptor;
class UObject;

UCLASS(Blueprintable)
class FSD_API USpawningBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpawningBlueprintLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemyGroupDescriptorSpreadOut(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, const TArray<FVector>& Locations, bool Alert, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemyGroupDescriptor(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, FVector Location, bool Alert, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemiesFromPool(UObject* WorldContextObject, float Difficulty, const TArray<FVector>& Locations, bool Alert, bool isConstantPreassure);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemiesAtLocationWithCallback(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 Count, FVector Location, const FEnemySpawnedDelegate& Callback, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemiesAtLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 Count, FVector Location, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemiesAtEachLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, TArray<FVector> Locations, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FVector> GetSpawnPointsInRange(UObject* WorldContextObject, float distanceToPlayers, int32 spawnPointCount, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FVector> GetSpawnPointsInCircle(UObject* WorldContextObject, FVector Location, float Radius, int32 Count, bool scaleToDificulty, float maxSpawnAngle, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FVector> GetSpawnPointsFromLocation(UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FVector> GetSpawnPointsAroundLocation(UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetSpawnPointInRange(UObject* WorldContextObject, float distanceToPlayers, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetSpawnPointFromLocation(UObject* WorldContextObject, FVector Location, float Distance, DeepPathFinderSize pfSize);
    
};

