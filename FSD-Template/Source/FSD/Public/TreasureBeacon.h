#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TreasureBeacon.generated.h"

class ATreasureContainer;
class USceneComponent;
class UTerrainPlacementComponent;
class UDebrisPositioning;
class UCurveFloat;

UCLASS()
class FSD_API ATreasureBeacon : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* RootComp;
    
    UPROPERTY(Export, VisibleAnywhere)
    UTerrainPlacementComponent* terrainPlacement;
    
protected:
    UPROPERTY(EditAnywhere)
    UDebrisPositioning* TreasurePositioning;
    
    UPROPERTY(EditAnywhere)
    UDebrisPositioning* DebrisPartsPositioning;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* AvoidCostCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* AvoidCostCurveDebris;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    UPROPERTY(EditAnywhere)
    float MinRange;
    
    UPROPERTY(EditAnywhere)
    float DebrisSpawnRange;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> DebrisPartClass;
    
    UPROPERTY(EditAnywhere)
    int32 DebrisPartsToSpawn;
    
    UPROPERTY(EditAnywhere)
    int32 MaxSpawnLocationTries;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATreasureContainer> TreasureClass;
    
    UPROPERTY(Replicated, Transient)
    ATreasureContainer* TreasureInstance;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpawnDebreeParts() const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ActivateTreasure();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATreasureBeacon();
};

