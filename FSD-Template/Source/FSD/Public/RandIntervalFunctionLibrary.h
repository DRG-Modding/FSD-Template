#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RandInterval.h"
#include "RandIntervalFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class URandIntervalFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatValue(const FRandInterval& RandInterval);
    
    URandIntervalFunctionLibrary();
};

