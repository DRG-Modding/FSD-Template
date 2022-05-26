#pragma once
#include "CoreMinimal.h"
#include "RandInterval.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RandIntervalFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class URandIntervalFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URandIntervalFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatValue(const FRandInterval& RandInterval);
    
};

