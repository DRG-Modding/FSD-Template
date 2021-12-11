#pragma once
#include "CoreMinimal.h"
#include "OxygenCallback.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE(FOxygenCallbackDelegate);

USTRUCT(BlueprintType)
struct FOxygenCallback {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOxygenCallbackDelegate Delegate;
    
    FSD_API FOxygenCallback();
};

