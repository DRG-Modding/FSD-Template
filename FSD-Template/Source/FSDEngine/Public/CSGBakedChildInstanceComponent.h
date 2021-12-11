#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "CSGBakedChildInstanceProperties.h"
#include "CSGBakedChildInstanceComponent.generated.h"

UCLASS(BlueprintType)
class UCSGBakedChildInstanceComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGBakedChildInstanceProperties Properties;
    
    UCSGBakedChildInstanceComponent();
};

