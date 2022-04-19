#pragma once
#include "CoreMinimal.h"
#include "SDFOnionProperties.h"
#include "SDFBaseComponent.h"
#include "SDFOnionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class FSDENGINE_API USDFOnionComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFOnionProperties Properties;
    
    USDFOnionComponent();
};

