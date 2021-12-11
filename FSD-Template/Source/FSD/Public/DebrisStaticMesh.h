#pragma once
#include "CoreMinimal.h"
#include "EDebrisMeshShadows.h"
#include "EDebrisMeshCollisionProfile.h"
#include "DecalData.h"
#include "DebrisStaticMesh.generated.h"

class UStaticMesh;
class UMaterialInterface;
class USoundCue;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FDebrisStaticMesh {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(EditAnywhere)
    EDebrisMeshCollisionProfile CollisionProfile;
    
    UPROPERTY(EditAnywhere)
    float Probablity;
    
    UPROPERTY(EditAnywhere)
    USoundCue* DestroyedSound;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* DestroyedParticles;
    
    UPROPERTY(EditAnywhere)
    FDecalData Decal;
    
    UPROPERTY(EditAnywhere)
    bool Fragile;
    
    UPROPERTY(EditAnywhere)
    EDebrisMeshShadows CastShadows;
    
    UPROPERTY(EditAnywhere)
    bool Durable;
    
    UPROPERTY(EditAnywhere)
    bool SpawnWhenCarving;
    
    UPROPERTY(EditAnywhere)
    bool OnlySpawnWhenCarving;
    
    FSD_API FDebrisStaticMesh();
};

