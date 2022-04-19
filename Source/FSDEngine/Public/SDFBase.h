#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuilderBase.h"
#include "SDFBaseProperties.h"
#include "SDFBase.generated.h"

UCLASS(Abstract)
class FSDENGINE_API USDFBase : public UBuilderBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFBaseProperties BaseProperties;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    USDFBase();
};

