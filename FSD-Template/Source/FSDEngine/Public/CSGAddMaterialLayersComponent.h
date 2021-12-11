#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "CSGAddMaterialLayersProperties.h"
#include "CSGAddMaterialLayersComponent.generated.h"

UCLASS(BlueprintType)
class UCSGAddMaterialLayersComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGAddMaterialLayersProperties Properties;
    
    UCSGAddMaterialLayersComponent();
};

