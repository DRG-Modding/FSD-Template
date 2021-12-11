#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DeepPathFinderSize.h"
#include "SpawningBlueprintLibrary.generated.h"

class UObject;
class APawn;
class UEnemyGroupDescriptor;
class UEnemyDescriptor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSpawningBlueprintLibraryCallback, APawn*, enemy);

UCLASS(BlueprintType)
class FSD_API USpawningBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEnemyGroupDescriptorSpreadOut(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, const TArray<FVector>& Locations, bool Alert, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEnemyGroupDescriptor(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, FVector Location, bool Alert, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEnemiesFromPool(UObject* WorldContextObject, float Difficulty, const TArray<FVector>& Locations, bool Alert, bool isConstantPreassure);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEnemiesAtLocationWithCallback(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, FVector Location, const FSpawningBlueprintLibraryCallback& Callback, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEnemiesAtLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, FVector Location, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEnemiesAtEachLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, TArray<FVector> Locations, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetSpawnPointsInRange(UObject* WorldContextObject, float distanceToPlayers, int32 spawnPointCount, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetSpawnPointsInCircle(UObject* WorldContextObject, FVector Location, float Radius, int32 count, bool scaleToDificulty, float maxSpawnAngle, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetSpawnPointsFromLocation(UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetSpawnPointsAroundLocation(UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static FVector GetSpawnPointInRange(UObject* WorldContextObject, float distanceToPlayers, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static FVector GetSpawnPointFromLocation(UObject* WorldContextObject, FVector Location, float Distance, DeepPathFinderSize pfSize);
    
    USpawningBlueprintLibrary();
};

