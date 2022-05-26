#pragma once
#include "CoreMinimal.h"
#include "SDFTorusProperties.h"
#include "SDFBaseWithTransformComponent.h"
#include "SDFTorusComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API USDFTorusComponent : public USDFBaseWithTransformComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFTorusProperties Properties;
    
    USDFTorusComponent();
};

