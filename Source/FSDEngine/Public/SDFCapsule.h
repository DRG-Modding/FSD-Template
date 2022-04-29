#pragma once
#include "CoreMinimal.h"
#include "SDFBaseWithTransform.h"
#include "SDFCapsuleProperties.h"
#include "SDFCapsule.generated.h"

UCLASS(Blueprintable)
class FSDENGINE_API USDFCapsule : public USDFBaseWithTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFCapsuleProperties Properties;
    
    USDFCapsule();
};

