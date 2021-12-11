#pragma once
#include "CoreMinimal.h"
#include "TerrainMaterialBase.h"
#include "TerrainMaterialCore.generated.h"

class UTerrainMaterialCore;
class UMaterialInterface;
class UMaterialInstance;

UCLASS(BlueprintType)
class FSDENGINE_API UTerrainMaterialCore : public UTerrainMaterialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTerrainMaterialCore* BurntMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTerrainMaterialCore* BulletBurntMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 PathfinderDanger: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 PathfinderPreventSpawning: 1;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* ScannerMaterial;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> RenderMaterial;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInstance> ObjectMaterial;
    
    UTerrainMaterialCore();
};

