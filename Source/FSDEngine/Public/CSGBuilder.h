#pragma once
#include "CoreMinimal.h"
#include "CSGBuilderBase.h"
#include "CSGBuilder.generated.h"

class UCSGPreviewScene;
class UCSGGroupComponent;
class UTerrainMaterialCore;
class UCSGBase;
class UBakeConfig;

UCLASS()
class FSDENGINE_API ACSGBuilder : public ACSGBuilderBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCSGGroupComponent* CSGRoot;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTerrainMaterialCore*> UsedMaterials;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UCSGBase* CurrentRoot;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UCSGBase* CurrentPreviewRoot;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UBakeConfig* CurrentPreviewConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCSGPreviewScene* PreviewScene;
    
    ACSGBuilder();
};

