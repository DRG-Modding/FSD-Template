#pragma once
#include "CoreMinimal.h"
#include "SDFBoxProperties.h"
#include "SDFBaseWithTransformComponent.h"
#include "SDFBoxComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API USDFBoxComponent : public USDFBaseWithTransformComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFBoxProperties Properties;
    
    USDFBoxComponent();
};

