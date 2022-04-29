#pragma once
#include "CoreMinimal.h"
#include "CSGGroupComponent.h"
#include "MeshLayerProperties.h"
#include "GeneralTerrainMaterialCombiner.h"
#include "CSGLayerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGLayerComponent : public UCSGGroupComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshLayerProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneralTerrainMaterialCombiner Materials;
    
    UCSGLayerComponent();
};

