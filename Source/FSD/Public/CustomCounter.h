#pragma once
#include "CoreMinimal.h"
#include "CustomCounterDelegateDelegate.h"
#include "CustomCounter.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCustomCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomCounterDelegate OnCount;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UObject> Owner;
    
    FSD_API FCustomCounter();
};

