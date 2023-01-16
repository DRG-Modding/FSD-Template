#pragma once
#include "CoreMinimal.h"
#include "CSGAddMaterialLayersProperties.h"
#include "CSGBaseComponent.h"
#include "CSGAddMaterialLayersComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGAddMaterialLayersComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGAddMaterialLayersProperties Properties;
    
    UCSGAddMaterialLayersComponent();
};

