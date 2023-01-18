#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECarveFilterType.h"
#include "RandRange.h"
#include "RandomizedInstantMeshCarver.generated.h"

class USTLMeshCarver;
class UStaticMesh;
class UStaticMeshCarver;
class UTerrainMaterialBase;

UCLASS(Blueprintable)
class ARandomizedInstantMeshCarver : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> CarvingMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USTLMeshCarver*> STLCarvingMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshCarver*> StaticMeshCarvers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange RandomScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialBase* TerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarveFilterType Filter;
    
public:
    ARandomizedInstantMeshCarver();
};

