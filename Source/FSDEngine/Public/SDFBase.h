#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuilderBase.h"
#include "SDFBaseProperties.h"
#include "SDFBase.generated.h"

UCLASS(Abstract, Blueprintable)
class FSDENGINE_API USDFBase : public UBuilderBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFBaseProperties BaseProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    USDFBase();
};

