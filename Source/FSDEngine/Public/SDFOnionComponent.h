#pragma once
#include "CoreMinimal.h"
#include "SDFBaseComponent.h"
#include "SDFOnionProperties.h"
#include "SDFOnionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API USDFOnionComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFOnionProperties Properties;
    
    USDFOnionComponent();
};

