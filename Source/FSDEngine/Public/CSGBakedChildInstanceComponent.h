#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "CSGBakedChildInstanceProperties.h"
#include "CSGBakedChildInstanceComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UCSGBakedChildInstanceComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGBakedChildInstanceProperties Properties;
    
    UCSGBakedChildInstanceComponent();
};

