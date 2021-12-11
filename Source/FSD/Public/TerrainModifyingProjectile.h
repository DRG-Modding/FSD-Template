#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Projectile.h"
#include "TerrainModifyingProjectile.generated.h"

class UTerrainMaterial;
class UStaticMesh;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTerrainModifyingProjectileOnRevertToNormal);

UCLASS()
class ATerrainModifyingProjectile : public AProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTerrainModifyingProjectileOnRevertToNormal OnRevertToNormal;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTerrainMaterial* Terrain;
    
    UPROPERTY(Transient)
    UTerrainMaterial* OriginalGroundMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* CarveMesh;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector CarveMeshScale;
    
    UPROPERTY(Transient)
    FVector LastHitLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Radius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool Revert;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TimeOnGround;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ExpensiveCarveNoise;
    
public:
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
    ATerrainModifyingProjectile();
};

