#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandRange.h"
#include "ECarveFilterType.h"
#include "RandomizedInstantMeshCarver.generated.h"

class UStaticMeshCarver;
class UStaticMesh;
class USTLMeshCarver;
class UTerrainMaterialBase;

UCLASS()
class ARandomizedInstantMeshCarver : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    TArray<UStaticMesh*> CarvingMeshes;
    
    UPROPERTY(EditAnywhere)
    TArray<USTLMeshCarver*> STLCarvingMeshes;
    
    UPROPERTY(EditAnywhere)
    TArray<UStaticMeshCarver*> StaticMeshCarvers;
    
    UPROPERTY(EditAnywhere)
    FRandRange RandomScale;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterialBase* TerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType Filter;
    
public:
    ARandomizedInstantMeshCarver();
};

