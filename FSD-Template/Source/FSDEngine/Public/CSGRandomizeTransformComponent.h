#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "CSGRandomizeTransformProperties.h"
#include "CSGRandomizeTransformComponent.generated.h"

UCLASS(BlueprintType)
class UCSGRandomizeTransformComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGRandomizeTransformProperties Properties;
    
    UCSGRandomizeTransformComponent();
};

