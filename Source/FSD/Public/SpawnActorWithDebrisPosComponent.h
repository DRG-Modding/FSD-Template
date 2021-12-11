#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SpawnActorWithDebrisPosComponent.generated.h"

class AActor;
class AProceduralSetup;
class UDebrisPositioning;
class UCurveFloat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSpawnActorWithDebrisPosComponentOnSpawned, TSubclassOf<AActor>, Actor, const FTransform&, Transform);

UCLASS(BlueprintType)
class FSD_API USpawnActorWithDebrisPosComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDistanceBetweenSpwans;
    
    UPROPERTY(EditAnywhere)
    bool AddTerrainPlacementBlockers;
    
    UPROPERTY(EditAnywhere)
    bool AvoidImportantLocations;
    
    UPROPERTY(EditAnywhere)
    float MinDistanceToImportantLocations;
    
public:
    UFUNCTION(BlueprintCallable)
    bool PlaceActorsWithCallback(int32 NumToSpawn, int32 NumToSpawnMin, int32 NumAllowedChecks, TSubclassOf<AActor> SpawnedActorClass, AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve, FSpawnActorWithDebrisPosComponentOnSpawned OnSpawned, FVector CustomLocation);
    
    UFUNCTION(BlueprintCallable)
    bool PlaceActors(int32 NumToSpawn, int32 NumToSpawnMin, int32 NumAllowedChecks, TSubclassOf<AActor> SpawnedActorClass, AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve, TArray<AActor*>& OutSpawnedActors, FVector CustomLocation);
    
    UFUNCTION(BlueprintCallable)
    void AddTerrainPlacement(AActor* Actor, AProceduralSetup* setup);
    
    USpawnActorWithDebrisPosComponent();
};

