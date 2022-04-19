#pragma once
#include "CoreMinimal.h"
#include "OxygenTriggerDelegateDelegate.h"
#include "OxygenCallback.generated.h"

USTRUCT(BlueprintType)
struct FOxygenCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOxygenTriggerDelegate Delegate;
    
    FSD_API FOxygenCallback();
};

