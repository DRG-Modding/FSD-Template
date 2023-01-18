#pragma once
#include "CoreMinimal.h"
#include "PostProcessingBlendable.generated.h"

class IBlendableInterface;
class UBlendableInterface;

USTRUCT(BlueprintType)
struct FPostProcessingBlendable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IBlendableInterface> Blendable;
    
    FSD_API FPostProcessingBlendable();
};

