#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "BakeSettings.h"
#include "CSGPreviewScene.generated.h"

class ACSGBuilder;
class UTerrainMaterialCore;

UCLASS()
class UCSGPreviewScene : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ACSGBuilder> Mesh;
    
    UPROPERTY(EditAnywhere)
    FBakeSettings Settings;
    
    UPROPERTY(EditAnywhere)
    int32 Seed;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterialCore* TerrainMaterial;
    
    UCSGPreviewScene();
};

