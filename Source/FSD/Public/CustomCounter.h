#pragma once
#include "CoreMinimal.h"
#include "CustomCounter.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FCustomCounterOnCount, float, Value, float, NormalizedTime);

USTRUCT(BlueprintType)
struct FCustomCounter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCustomCounterOnCount OnCount;
    
    UPROPERTY()
    TWeakObjectPtr<UObject> Owner;
    
    FSD_API FCustomCounter();
};

