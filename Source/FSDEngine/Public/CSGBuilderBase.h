#pragma once
#include "CoreMinimal.h"
#include "BakeSettings.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "CSGBuilderBase.generated.h"

class UTerrainMaterialCore;
class UCSGPreviewComponent;
class UBakeConfig;

UCLASS()
class FSDENGINE_API ACSGBuilderBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox BoundingBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBakeSettings PreviewSettings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTerrainMaterialCore* EmptyMat;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTerrainMaterialCore* ErrorMat;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTerrainMaterialCore* SolidMat;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTerrainMaterialCore* BurnedMat;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UCSGPreviewComponent* PreviewComponent;
    
    ACSGBuilderBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreGenerate(UBakeConfig* builder);
    
};

