#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DeepDiveFunctionLibrary.generated.h"

class UObject;
class UDeepDive;
class UDeepDiveTemplate;

UCLASS(BlueprintType)
class UDeepDiveFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDeepDiveElite(UObject* WorldContextObject, UDeepDive* DeepDive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHasEverCompletedDeepDive(UObject* WorldContextObject, UDeepDiveTemplate* DeepDive);
    
    UDeepDiveFunctionLibrary();
};

