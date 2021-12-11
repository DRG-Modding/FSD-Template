#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "CSGRandomDisableProperties.h"
#include "CSGRandomDisableComponent.generated.h"

UCLASS(BlueprintType)
class UCSGRandomDisableComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGRandomDisableProperties Properties;
    
    UCSGRandomDisableComponent();
};

