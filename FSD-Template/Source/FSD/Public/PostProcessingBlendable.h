#pragma once
#include "CoreMinimal.h"
#include "PostProcessingBlendable.generated.h"

class UBlendableInterface;
class IBlendableInterface;

USTRUCT(BlueprintType)
struct FPostProcessingBlendable {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TScriptInterface<IBlendableInterface> Blendable;
    
    FSD_API FPostProcessingBlendable();
};

