#pragma once
#include "CoreMinimal.h"
#include "SDFBaseWithTransform.h"
#include "SDFBoxProperties.h"
#include "SDFBox.generated.h"

UCLASS(Blueprintable)
class FSDENGINE_API USDFBox : public USDFBaseWithTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFBoxProperties Properties;
    
    USDFBox();
};

