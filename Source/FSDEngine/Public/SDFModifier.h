#pragma once
#include "CoreMinimal.h"
#include "SDFModifierProperties.h"
#include "SDFSingleChildBase.h"
#include "SDFModifier.generated.h"

UCLASS(Blueprintable)
class FSDENGINE_API USDFModifier : public USDFSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFModifierProperties Properties;
    
    USDFModifier();
};

