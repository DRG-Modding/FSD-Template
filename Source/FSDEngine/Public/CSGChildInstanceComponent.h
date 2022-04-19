#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "CSGChildInstanceProperties.h"
#include "GeneralTerrainMaterialCombiner.h"
#include "CSGChildInstanceComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UCSGChildInstanceComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGChildInstanceProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneralTerrainMaterialCombiner Materials;
    
    UCSGChildInstanceComponent();
};

