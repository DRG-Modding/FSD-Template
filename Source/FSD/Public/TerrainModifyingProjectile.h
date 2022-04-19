#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "RevertToNormalDelegate.h"
#include "UObject/NoExportTypes.h"
#include "TerrainModifyingProjectile.generated.h"

class UTerrainMaterial;
class UStaticMesh;

UCLASS()
class ATerrainModifyingProjectile : public AProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRevertToNormal OnRevertToNormal;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* Terrain;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* OriginalGroundMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UStaticMesh* CarveMesh;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector CarveMeshScale;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector LastHitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool Revert;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float TimeOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ExpensiveCarveNoise;
    
public:
    ATerrainModifyingProjectile();
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
};

