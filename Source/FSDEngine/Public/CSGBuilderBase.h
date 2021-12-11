#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "BakeSettings.h"
#include "CSGBuilderBase.generated.h"

class UBakeConfig;
class UCSGPreviewComponent;
class UTerrainMaterialCore;

UCLASS()
class FSDENGINE_API ACSGBuilderBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBox BoundingBox;
    
    UPROPERTY(EditAnywhere)
    int32 PreviewSeed;
    
    UPROPERTY(EditAnywhere)
    FBakeSettings PreviewSettings;
    
    UPROPERTY()
    UTerrainMaterialCore* EmptyMat;
    
    UPROPERTY()
    UTerrainMaterialCore* ErrorMat;
    
    UPROPERTY()
    UTerrainMaterialCore* SolidMat;
    
    UPROPERTY()
    UTerrainMaterialCore* BurnedMat;
    
    UPROPERTY(Export, Transient)
    UCSGPreviewComponent* PreviewComponent;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreGenerate(UBakeConfig* builder);
    
    ACSGBuilderBase();
};

