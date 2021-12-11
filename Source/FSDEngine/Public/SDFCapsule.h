#pragma once
#include "CoreMinimal.h"
#include "SDFBaseWithTransform.h"
#include "SDFCapsuleProperties.h"
#include "SDFCapsule.generated.h"

UCLASS()
class FSDENGINE_API USDFCapsule : public USDFBaseWithTransform {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFCapsuleProperties Properties;
    
    USDFCapsule();
};

