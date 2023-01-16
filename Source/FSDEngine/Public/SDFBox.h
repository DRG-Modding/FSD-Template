#pragma once
#include "CoreMinimal.h"
#include "SDFBoxProperties.h"
#include "SDFBaseWithTransform.h"
#include "SDFBox.generated.h"

UCLASS(Blueprintable)
class FSDENGINE_API USDFBox : public USDFBaseWithTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFBoxProperties Properties;
    
    USDFBox();
};

