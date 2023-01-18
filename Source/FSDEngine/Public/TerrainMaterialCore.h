#pragma once
#include "CoreMinimal.h"
#include "TerrainMaterialBase.h"
#include "TerrainMaterialCore.generated.h"

class UMaterialInterface;
class UTerrainMaterialCore;

UCLASS(Blueprintable)
class FSDENGINE_API UTerrainMaterialCore : public UTerrainMaterialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialCore* BurntMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialCore* BulletBurntMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PathfinderDanger: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PathfinderPreventSpawning: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ScannerMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> RenderMaterial;
    
    UTerrainMaterialCore();
};

