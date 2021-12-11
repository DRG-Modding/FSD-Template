#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "GeneralTerrainMaterialCombiner.h"
#include "CSGChildInstanceProperties.h"
#include "CSGChildInstanceComponent.generated.h"

UCLASS(BlueprintType)
class UCSGChildInstanceComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGChildInstanceProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGeneralTerrainMaterialCombiner Materials;
    
    UCSGChildInstanceComponent();
};

