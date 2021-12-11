#pragma once
#include "CoreMinimal.h"
#include "CSGBuilderBase.h"
#include "CSGBuilder.generated.h"

class UCSGGroupComponent;
class UTerrainMaterialCore;
class UCSGBase;
class UCSGPreviewScene;
class UBakeConfig;

UCLASS()
class FSDENGINE_API ACSGBuilder : public ACSGBuilderBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    UCSGGroupComponent* CSGRoot;
    
    UPROPERTY(Transient)
    TArray<UTerrainMaterialCore*> UsedMaterials;
    
    UPROPERTY(Transient)
    UCSGBase* CurrentRoot;
    
    UPROPERTY(Transient)
    UCSGBase* CurrentPreviewRoot;
    
    UPROPERTY(Transient)
    UBakeConfig* CurrentPreviewConfig;
    
    UPROPERTY(EditAnywhere)
    UCSGPreviewScene* PreviewScene;
    
    ACSGBuilder();
};

