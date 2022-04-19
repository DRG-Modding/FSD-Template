#pragma once
#include "CoreMinimal.h"
#include "SDFBaseWithTransformComponent.h"
#include "SDFTorusProperties.h"
#include "SDFTorusComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class FSDENGINE_API USDFTorusComponent : public USDFBaseWithTransformComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFTorusProperties Properties;
    
    USDFTorusComponent();
};

