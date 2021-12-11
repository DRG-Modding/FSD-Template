#pragma once
#include "CoreMinimal.h"
#include "SDFBaseWithTransformComponent.h"
#include "SDFCapsuleProperties.h"
#include "SDFCapsuleComponent.generated.h"

UCLASS()
class FSDENGINE_API USDFCapsuleComponent : public USDFBaseWithTransformComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFCapsuleProperties Properties;
    
    USDFCapsuleComponent();
};

