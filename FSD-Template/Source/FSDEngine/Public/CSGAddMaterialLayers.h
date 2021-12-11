#pragma once
#include "CoreMinimal.h"
#include "CSGSingleChildBase.h"
#include "CSGAddMaterialLayersProperties.h"
#include "CSGAddMaterialLayers.generated.h"

UCLASS(BlueprintType)
class UCSGAddMaterialLayers : public UCSGSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGAddMaterialLayersProperties Properties;
    
    UCSGAddMaterialLayers();
};

