#pragma once
#include "CoreMinimal.h"
#include "CSGSingleChildBase.h"
#include "CSGAddMaterialLayersProperties.h"
#include "CSGAddMaterialLayers.generated.h"

UCLASS(Blueprintable)
class UCSGAddMaterialLayers : public UCSGSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGAddMaterialLayersProperties Properties;
    
    UCSGAddMaterialLayers();
};

