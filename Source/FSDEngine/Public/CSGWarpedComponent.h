#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "WarpedProperties.h"
#include "CSGWarpedComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGWarpedComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarpedProperties Properties;
    
    UCSGWarpedComponent();
};

