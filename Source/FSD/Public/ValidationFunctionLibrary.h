#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ValidationFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class FSD_API UValidationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void SetSelectedAssets(TArray<FString> Paths);
    
    UValidationFunctionLibrary();
};

